/*
 * 9.cpp
 *
 *  Created on: Sep 7, 2014
 *      Author: Shyam
 */
#include<iostream>
int main(int argc, char **argv) {
	using std::cout;
	int i, j, k;
	for (i = 1; i < 1000; i++) {
		for (j = i + 1; j < 1000; j++) {
			for (k = j + 1; k < 1000; k++) {
			if(i*i+j*j==k*k && i+j+k==1000)
				cout<< i*j*k;
		}
	}
}
}

