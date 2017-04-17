/*
* For numbers 0-N count number of 1's in their binary representation
*/

#include<iostream>
#include<vector>

std::vector<int> countBits(int n);

int main() {
	unsigned int n;
	std::cout << " Input a non-negative number to count to. " << std::endl;
	std::cin >> n;

	std::vector<int> bitsCounted = countBits(n);

	std::cout << " Bits in each number. " << std::endl;
	for (unsigned int i = 0; i < bitsCounted.size(); i++) {
		std::cout << " " << bitsCounted[i];
		(i == bitsCounted.size() - 1) ? std::cout << std::endl : std::cout << ", ";
	}

	return 0;
}

std::vector<int> countBits(int n) {
	// 0 has no 1's in binary so we push that into the vector
	std::vector<int> countedBits;
	countedBits.push_back(0);
	// since 0 is taken care of, look at numbers 1-n
	for (int i = 1; i <= n; i++) {
		// reset counter after every loop
		int count = 0;
		// reset the temp after every loop
		int temp = i;
		// until our current n = 0, perform mod operations
		while (temp != 0) {
			// if it isn't divisible by two, add a 1 to counter
			if (temp % 2 == 1) {
				count++;
			}
			temp /= 2;
		}
		// update our vector after temp = 0
		countedBits.push_back(count);
	}

	return countedBits;
}
