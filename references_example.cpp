/*
 * references_example.cpp
 *
 *  Created on: Sep 5, 2014
 *      Author: Shyam
 */

#include <stdio.h>
#include <iostream>

void square(int x, int& result) {
	result = x * x;
}



void foo( const std::string &s )
{
    std::cout << s << std::endl;
}

void bar( std::string s )
{
    std::cout << s << std::endl;
}

int main2()
{
    std::string text = "This is a test.";
    foo( text ); // doesn't make a copy of "text"
    bar( text ); // makes a copy of "text"
    return 0;
}

int main(int argc, char **argv) {
	int y;
	square(3, y);
//	square(3, 6);
	printf("%d\n", y);
	main2();
}
