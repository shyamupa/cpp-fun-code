/*
 * arrays_fun.cpp
 *
 *  Created on: Sep 5, 2014
 *      Author: Shyam
 */




#include <iostream>
using namespace std;


int main() {
  cout << "INT" << endl;
  cout << std::numeric_limits<int>::min() << " TO "<< std::numeric_limits<int>::max() << endl;
  cout << "size of INT = " << sizeof(int) << endl;

  cout << "SHORT" << endl;
  cout << std::numeric_limits<short>::min() << " TO "<< std::numeric_limits<short>::max() << endl;
  cout << "size of short = " << sizeof(short) << endl;

  cout << "LONG" << endl;
  cout << std::numeric_limits<long>::min() << " TO "<< std::numeric_limits<long>::max() << endl;
  cout << "size of LONG = " << sizeof(long) << endl;

  cout << "LONG LONG" << endl;
  cout << std::numeric_limits<long long>::min() << " TO "<< std::numeric_limits<long long>::max() << endl;
  cout << "size of LONG LONG = " << sizeof(long long) << endl;

  cout << "FLOAT" << endl;
  cout << std::numeric_limits<float>::min() << " TO "<< std::numeric_limits<float>::max() << endl;
  cout << "size of FLOAT = " << sizeof(float) << endl;

  cout << "DOUBLE" << endl;
  cout << std::numeric_limits<double>::min() << " TO "<< std::numeric_limits<double>::max() << endl;
  cout << "size of DOUBLE = " << sizeof(double) << endl;
}
