/*
Given an array of integers, each element appears twice except for one, find that one.
*/
#include<string>
#include<iostream>
#include<vector>

int main() {
		int size;
		std::cout << "How many elements in your array?" << std::endl;
		std::cin >> size;
		std::vector<int> numbers;
		int number;
		// we start with 0 because n XOR n = 0
		int soloNumber = 0;
		for (int i = 0; i < size; i++) {
			std::cout << "Input " << size << " numbers, pressing enter after each." << std::endl;
			std::cin >> number;
			// create our vector of numbers
			numbers.push_back(number);
		}
		for (int j = 0; j < numbers.size(); j++) {
			// XOR all the numbers, the remaining number will not have a copy of itself, so soloNumber will be the lone number
			soloNumber ^= numbers[j];
		}
		std::cout << soloNumber << " is the number that only appears once." << std::endl;

	return 0;
}
