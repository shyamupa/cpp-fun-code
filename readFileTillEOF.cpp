#include <stdio.h>
#include <queue>
#include <iostream>
#include <cstring>
#include <cstdlib>

int main(int argc, char **argv) {
  using namespace std;
  while (true) {
    string x;
    freopen("in.txt","r",stdin);
    cin >> x;
    if( cin.eof() ) break;
    cout << x << endl;
  }

}
