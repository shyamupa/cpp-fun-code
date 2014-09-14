#include<iostream>
#include<vector>

// g++ -std=c++11 foreach_example.cpp

using namespace std;
int main()
{
  vector<int> vec;
  vec.push_back( 10 );
  vec.push_back( 20 );

  for (int &i : vec ) 
    {
      cout << i << endl;
    }
}
