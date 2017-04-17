/*
* Next Greater Number of number x in first array is first greater number
* in second array.  -1 if it DNE. Elements in each array are unique.
*/

#include<iostream>
#include<string>

int main() {
	int nums1[3] = { 2, 4 };
	int nums2[4] = { 1, 2, 3, 4 };
	int nextGreaterElement[3];
	bool found = false;

	// loop through array one
	for (int i = 0; i < 3; i++) {
	// loop through array two
		for (int j = 0; j < 4; j++) {
		// if you found the same number in both arrays
			if (nums1[i] == nums2[j]) {
				// start at the next indexed number
				int continuingNumber = j + 1;
				// check to see if the next number was out of bounds
				if (continuingNumber == 4) {
					// print -1 if it was
					std::cout << " -1 ";
				}
				// loop through the remaining numbers in array two
				while (continuingNumber < 4) {
					// if found, print it, otherwise increase the counter
					if (nums2[continuingNumber] > nums1[i]) {
						std::cout << " " << nums2[continuingNumber] << " " ;
						found = true;
						continuingNumber = 4;
					}
					else {
						continuingNumber++;
					}
				}
			}
		}
		if (!found) {
			std::cout << " -1 ";
		}
	}
	std::cout << std::endl;
	return 0;
}
