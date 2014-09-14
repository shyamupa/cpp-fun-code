/*
 * namespaces_fun.cpp
 *
 *  Created on: Sep 5, 2014
 *      Author: Shyam
 */

#include <iostream>
using namespace std;

namespace foo
{
  int value() { return 5; }
}

namespace bar
{
  const double pi = 3.1416;
  double value() { return 2*pi; }
}

namespace foo
{
  double this_too() {return 2*value();}
}

int main () {
  cout << foo::value() << '\n';
  cout << foo::this_too() << '\n';
  cout << bar::value() << '\n';
  cout << bar::pi << '\n';
  return 0;
}


