// HammingDistance.cpp : Calculates Hamming Distance of two numbers
//

#include<iostream>
#include<string>
#include<bitset>

long long decimalToBinary(int number);

int main()
{
	int distance = 0;
	unsigned int xSize, ySize, firstNumber, secondNumber;
	/*
	* Step 1: convert numbers to binary
	* Step 2: compare where bits are different
	*/
	while (true) {
		// get inputs
		std::cout << "Input first number." << std::endl;
		std::cin >> firstNumber;
		if (firstNumber < 0) {
			std::cout << "Must be a positive number." << std::endl;
			std::cin >> firstNumber;
		}
		std::cout << "Input second number." << std::endl;
		std::cin >> secondNumber;
		if (secondNumber < 0) {
			std::cout << "Must be a positive number." << std::endl;
			std::cin >> secondNumber;
		}

		std::cout << "Calculating Hamming Distance." << std::endl;

		// convert numbers to binary
		long long x = decimalToBinary(firstNumber);
		long long y = decimalToBinary(secondNumber);

		// convert those binary numbers into a string
		std::string firstString = std::to_string(x);
		std::string secondString = std::to_string(y);

		// create a bitset for each of the two strings
		std::bitset <32> firstBinary(firstString);
		std::bitset <32> secondBinary(secondString);

		//xor operation to count whenever they're different bits
		distance = (firstBinary ^ secondBinary).count();
		std::cout << "Hamming distance is: " << distance << std::endl;
	}

	return 0;
}

long long decimalToBinary(int number) {
	long long binaryNumber = 0;
	int remainder, i = 1;

	while (number != 0) {
		// calculate remainder
		remainder = number % 2;
		// half the original number
		number /= 2;
		// put each place of binary
		binaryNumber += remainder*i;
		// increase i to move to next binary place
		i *= 10;
	}

	return binaryNumber;
}



