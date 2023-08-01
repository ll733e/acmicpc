#include <iostream>
using namespace std;

int main() {
  int   i1, i2, i3;
  
  cin >> i1 >> i2 >> i3;

  i2 += i3; i1 += int(i3 / 60) - 1;
  if(i2 < 0)        { i1 -= 1; i2 += 60; }
  else if(i2 >= 60)   { i1 += 1; i2 -= 60; }
  if(i1 < 0)        i1 += 24;

# 푸는중
  cout << i1 << " " << i2 << endl;
}