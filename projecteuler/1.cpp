/*
 * 1.cpp
 *
 *  Created on: Sep 7, 2014
 *      Author: Shyam
 */
#include <iostream>

int main(int argc, char **argv) {
	int i = 3;
	int sum = 0;
	while (i < 1000) {
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;

	}
	printf("%d\n", sum);
}

