/*
* Simple fizzbuzz program
*/

#include<iostream>

int main() {
	int size = 0;
	std::cout << " Please input a number for fizzbuzz. " << std::endl;
	std::cin >> size;
			
	for (int i = 1; i <= size; i++) {
		if ((i % 3 == 0) && (i % 5 == 0)) {
			std::cout << "FizzBuzz" << std::endl;
		}
		else if (i % 3 == 0) {
			std::cout << "Fizz" << std::endl;
		}
		else if (i % 5 == 0) {
			std::cout << "Buzz" << std::endl;
		}
		else {
			std::cout << i << std::endl;
		}
	}
	
	return 0;
}
