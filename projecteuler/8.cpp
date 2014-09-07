/*
 * 8.cpp
 *
 *  Created on: Sep 7, 2014
 *      Author: Shyam
 */

#include <stdio.h>
#include <vector>
int main() {
	freopen("8.input", "r", stdin);
	int c;
	std::vector<int> v;
	int cnt = 0;
	while (1) {
		c = getchar();            // Get one character from the input
		if (c == EOF) {
			break;
		}  // Exit the loop if we receive EOF ("end of file")
		putchar(c);
		if (c - '0' >= 0)
			v.push_back(c - '0');
	}
	printf("\n");
	for (int i = 0; i < v.size(); ++i) {
		printf("%d\n", v[i]);
	}
	printf("%d %d \n", v[0], (int) v.size());
	int T = 13;
	long long max = -1;
	for (int i = 0; i < v.size() - T; i++) {
		long long prod = 1;
		for (int j = 0; j < T; j++) {
			prod *= (long) v[i + j];
		}
		if (prod > max) {
			max = prod;
		}
	}
	printf("max prod %lld\n", max);
}
