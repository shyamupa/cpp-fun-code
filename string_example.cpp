/*
 * string_example.cpp
 *
 *  Created on: Sep 5, 2014
 *      Author: Shyam
 */
// appending to string
#include <iostream>
#include <string>

int main2();

int main() {
	main2();
	std::string str;
	std::string str2 = "Writing ";
	std::string str3 = "print 10 and then 5 more";

	// used in the same order as described above:
	str.append(str2);                       // "Writing "
	str.append(str3, 6, 3);                   // "10 "
	str.append("dots are cool", 5);          // "dots "
	str.append("here: ");                   // "here: "
	str.append(10u, '.');                    // ".........."
	str.append(str3.begin() + 8, str3.end());  // " and then 5 more"


	std::cout << str << '\n';
	return 0;
}
using namespace std;



// the same with std::string
int main2() {
	string str1 = "Hello";
	string str2 = "World";
	string str3;
	int len;

	// copy str1 into str3
	str3 = str1;
	cout << "str3 : " << str3 << endl;

	// concatenates str1 and str2
	str3 = str1 + str2;
	cout << "str1 + str2 : " << str3 << endl;

	// total length of str3 after concatenation
	len = str3.size();
	cout << "str3.size() :  " << len << endl;

	return 0;
}

