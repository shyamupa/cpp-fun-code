/*
 * whynot.cpp
 *
 *  Created on: Sep 5, 2014
 *      Author: Shyam
 */

/* malloc example: random string generator*/
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */
#include <vector>
#include <iostream>

int main() {
	int i, n;
	char * buffer;

	printf("How long do you want the string? ");
	scanf("%d", &i);

	buffer = (char*) malloc(sizeof(char) * (i + 1));
	if (buffer == NULL)
		exit(1);

	for (n = 0; n < i; n++)
		buffer[n] = rand() % 26 + 'a';
	buffer[i] = '\0';

	printf("Random string: %s\n", buffer);
	free(buffer);
	int arr[] = { 3, 1, 4 ,5 };
	std::vector<int> v(arr,std::end(arr));
	std::string strarr[] = {"a","b","c"};
	std::vector<std::string>xx(strarr,std::end(strarr));

	// compile with g++ -std=c++11
	for ( auto i : xx ) {
	        std::cout << i << std::endl;
	    }
	if (std::find(std::begin(v), std::end(v), 5) != std::end(v)) {
		std::cout << "found a 5 in vector v!\n";
	}

	int a[] = { 5, 10, 15 };
	if (std::find(std::begin(a), std::end(a), 5) != std::end(a)) {
		std::cout << "found a 5 in array a!\n";
	}
	return 0;
}

