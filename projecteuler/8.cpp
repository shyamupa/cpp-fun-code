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
	do {
		c = getchar();
		if (c != EOF) {
			printf("%c", c);
			v.push_back(c);
		} else
			break;
	} while (true);

	printf("%d", v[0]);
	int size = v.size();
	printf("%d", size);
	int T = 13;
	int max = -1;
	for (unsigned int i = 0; i < size - T; i++) {
		int sum = 1;
		for (int j = 0; j < T; i++) {
			sum *= v[i + j];
		}
		printf("%d", sum);
		if (sum > max)
			max = sum;
	}
	printf("%d", max);
	return 0;
}
