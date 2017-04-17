/*
* Checks to see if any words in a given array can be written with one row on a keyboard
*/

#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
#include<locale>

bool inFirstRow(std::string input);
bool inSecondRow(std::string input);
bool inThirdRow(std::string input);

int main() {
	std::string answer;

	std::cout << "Type in a word to see if it can be written on only one row. Press enter to quit." << std::endl;
	std::getline(std::cin, answer);
	
	std::string testInput = answer;
	if (inFirstRow(testInput)) {
		std::cout << answer << " written only using row one." << std::endl;
	}
	else if (inSecondRow(testInput)) {
		std::cout << answer << " written only using row two." << std::endl;
	}
	else if (inThirdRow(testInput)) {
		std::cout << answer << " written only using row three." << std::endl;
	}
	else {
		std::cout << answer << " could not be written using only one row on a keyboard." << std::endl;
	}
		
	return 0;
}

bool inFirstRow(std::string input) {
	std::string firstRow = "qwertyuiop";
	std::string tempString = input;

	// make string lowercase to compare to row string
	std::transform(tempString.begin(), tempString.end(), tempString.begin(), ::tolower);

	for (int i = 0; i < tempString.length(); ++i) {
		// see if each letter in our input is in the keyboard now
		std::size_t found = firstRow.find(tempString[i]);
		// if it was found, delete it from the string
		if (found != std::string::npos) {
			tempString.erase(tempString.begin() + i);
		}
		else {
			return false;
		}
	}
	return true;
}

bool inSecondRow(std::string input) {
	std::string secondRow = "asdfghjkl";
	std::string tempString = input;

	std::transform(tempString.begin(), tempString.end(), tempString.begin(), ::tolower);

	for (int i = 0; i < tempString.length(); ++i) {
		// see if each letter in our input is in the keyboard now
		std::size_t found = secondRow.find(tempString[i]);
		// if it was found, delete it from the string
		if (found != std::string::npos) {
			tempString.erase(tempString.begin() + i);
		}
		else {
			return false;
		}
	}
	return true;
}

bool inThirdRow(std::string input) {
	std::string thirdRow = "zxcvbnm";
	std::string tempString = input;

	std::transform(tempString.begin(), tempString.end(), tempString.begin(), ::tolower);

	for (int i = 0; i < tempString.length(); ++i) {
		// see if each letter in our input is in the keyboard now
		std::size_t found = thirdRow.find(tempString[i]);
		// if it was found, delete it from the string
		if (found != std::string::npos) {
			tempString.erase(tempString.begin() + i);
		}
		else {
			return false;
		}
	}
	return true;
}
