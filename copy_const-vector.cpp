/*
 * copy_const.cpp
 *
 *  Created on: Sep 13, 2014
 *      Author: Shyam
 */

#include <iostream>
#include<vector>

using namespace std;

class Line {
public:
	int getLength(void);
	Line(int len);             // simple constructor
	Line(const Line &obj);  // copy constructor
	~Line();                     // destructor

private:
	int *ptr;
};

// Member functions definitions including constructor
Line::Line(int len) {
	// allocate memory for the pointer;
	ptr = new int;
	*ptr = len;
	cout << "Normal constructor allocating ptr." << *ptr << " Ptr is " << ptr << endl;

}

Line::Line(const Line &obj) {
	ptr = new int;
	*ptr = *obj.ptr; // copy the value
	cout << "Copy constructor allocating ptr." << *ptr << " Ptr is " << ptr << endl;
}

Line::~Line(void) {
	cout << "Freeing memory!" << *ptr << " Ptr is " << ptr << endl;
	delete ptr;
}
int Line::getLength(void) {
	return *ptr;
}

void display(Line obj) {
	cout << "Length of line : " << obj.getLength() << endl;
}

// Main function for the program
int main() {
//	Line line(10);

//   display(line);
	int i;
	vector<Line> v;
	for (i = 0; i < 10; i++)
		v.push_back(Line(i));
	return 0;
}
