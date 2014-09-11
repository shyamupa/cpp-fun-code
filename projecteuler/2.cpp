/*
 * 2.cpp
 *
 *  Created on: Sep 7, 2014
 *      Author: Shyam
 */

#include <stdio.h>
int main(int argc, char **argv) {
	long a = 1, b = 1;
	long c;
	int i=0;
	while (c < 4000000) {
		c = a + b;
		b = a;
		a = c;
		printf("%d %ld\n",++i,c);
	}
	printf("%ld\n",c-1);
}
