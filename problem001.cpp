/*
 * problem001.cpp
 *
 *  Created on: 15. sep. 2019
 *      Author: Kamilla
 */
#include <iostream>
int main () {

	int total = 0;

	for (int i = 1; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			total += i;
		}
	}

	std::cout << "Sum of all multiples of 3 or 5 below 1000: " << total;

	return 0;

}
