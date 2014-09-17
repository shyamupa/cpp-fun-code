#include <fstream>
#include <iostream>
#include <string>

int main() 
{ 
  using namespace std;
  ifstream file("input.txt");
  string str; 
  while (std::getline(file, str))
    {
      cout << str << endl;
    }
}
