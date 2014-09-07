/*
 * references_example2.cpp
 *
 *  Created on: Sep 5, 2014
 *      Author: Shyam
 */
#include <iostream>


int main() {
	// declare simple variables
	int i;
	double d;

	// declare reference variables and don't forget to initialize!
	int& r = i;
	double& s = d;
	i = 5;
	std::cout << "Value of i : " << i << std::endl;
	std::cout << "Value of i reference : " << r << std::endl;

	d = 11.7;
	std::cout << "Value of d : " << d << std::endl;
	std::cout << "Value of d reference : " << s << std::endl;

	return 0;
}

