#include <iostream>
using namespace std;

int main() {
  unsigned int   scr;

  cin >> scr;

  if(scr >= 90)       cout << "A" << endl;
  else if(scr >= 80)  cout << "B" << endl;
  else if(scr >= 70)  cout << "C" << endl;
  else if(scr >= 60)  cout << "D" << endl;
  else                cout << "F" << endl;
}
