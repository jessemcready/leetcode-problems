#include<iostream>
#include<string>

std::string reverse(std::string originalString);

int main() {
	std::string input, reversedInput;
	std::cout << "Input a string to be reversed." << std::endl;
	std::getline(std::cin, input);

	reversedInput = reverse(input);
	std::cout << input << " reversed is " << reversedInput << std::endl;

	return 0;
}

std::string reverse(std::string originalString) {
	std::string reversedString;
	for (int i = originalString.length(); i >= 0; i--) {
		if (originalString[i] != '\0') {
			reversedString.push_back(originalString[i]);
		}
	}
	return reversedString;
}
