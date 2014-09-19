#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream iFile("in.txt");// input.txt has integers, one per line

  while (true)
    {
      int x;
      iFile >> x;
      if(iFile.eof()) break;
      cout << x << endl;
    }

  return 0;
}
