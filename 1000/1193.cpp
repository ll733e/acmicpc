#include <iostream>
using namespace std;

int main() {
   int   UP, DW, N, i;

   cin >> N;

   for(i = 1 ; N > i ; i++)
      N -= i;
   UP = i + 1 - N;
   DW = N;

   if(i % 2 == 1)
      cout << UP << "/" << DW << endl;
   else
      cout << DW << "/" << UP << endl;
}