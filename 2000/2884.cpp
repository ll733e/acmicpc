#include <iostream>
using namespace std;

int main() {
  int   i1, i2;
  
  cin >> i1 >> i2;
  if((i2 -= 45) < 0) { i1--; i2 += 60; }
  if(i1 < 0) i1 += 24;

  cout << i1 << " " << i2 << endl;
}