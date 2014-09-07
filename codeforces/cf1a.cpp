/*
 * cf1a.cpp
 *
 *  Created on: Sep 7, 2014
 *      Author: Shyam
 */

#include <math.h>
#include <iostream>

int main() {
	long long n, m, a;
	std::cin >> n;
	std::cin >> m;
	std::cin >> a;
//	std::cout << ceil(m / (a * 1.0)) * ceil(n / (a * 1.0));
	std::cout << ((m+a-1)/a)*((n+a-1)/a) << std::endl;
}
