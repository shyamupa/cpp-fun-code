/*
 * 10.cpp
 *
 *  Created on: Sep 8, 2014
 *      Author: Shyam
 */

#include <stdio.h>

bool IsPrime(int number) {
	int i;
	for (i = 2; i * i <= number; i++) {
		if (number % i == 0) {
			return false;
		}
	}
//	printf("PRIME %d\n",number);
	return true;
}

int main() {
	int number = 2;
	long long sum = 0;
	while (number < 2000000) {
		if (IsPrime(number)) {
			sum += (long long) number;
		}
		number++;
	}
	printf("%lld\n", sum);
	return 0;
}
