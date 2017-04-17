/*
* Given a vector of only 1's and 0's find the max consecutive 1's in the vector
*/

#include<iostream>
#include<vector>

int main() {
	int currentMax = 0, tempMax = 0, length, tempNumber;
	std::vector<int> numbers;
	bool foundZero = false;

	std::cout << "How many numbers are you inputting?" << std::endl;
	std::cin >> length;
	if (length < 1) {
		std::cout << "Length must be greater than 0." << std::endl;
		std::cin >> length;
	}
	std::cout << "Please input either a 1 or 0." << std::endl;
	// fill in the vector, can shorten time(if using input from user and not predefined vector/array) by just checking current and previous inputs as they go in
	for (int i = 0; i < length; i++) {
		std::cin >> tempNumber;
		numbers.push_back(tempNumber);
	}
	// check for consecutive ones
	for (int i = 0; i < length; i++) {
		// used to go through while loop
		int count;
		// if our current number is a 1
		if (numbers[i] == 1) {
			// increase the temporary max consecutive numbers
			tempMax++;
			// set count equal to the next indexed number
			count = i + 1;
			// reset our while loop exitor
			foundZero = false;
			while (!foundZero) {
				// if we reached the end of the vector
				if (count >= length) {
					// exit the while loop
					foundZero = true;
				}
				// if the next number is a 0
				else if (numbers[count] == 0) {
					// check if current max < temporary max
					if (currentMax < tempMax) {
						// if so, set current max
						currentMax = tempMax;
					}
					// exit the while loop
					foundZero = true;
				}
				else {
					// otherwise increment tempMax and increase the counter
					tempMax++;
					count++;
				}
			}
			
		}
		// check tempMax and currentMax
		if (tempMax > currentMax) {
			currentMax = tempMax;
		}
		// reset our tempMax
		tempMax = 0;
	}
	std::cout << "Longest streak of 1's is: " << currentMax << std::endl;	

	return 0;
}
