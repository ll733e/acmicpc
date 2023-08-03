#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int   C1, C2, min, gcd, lcm;
   int   i, j;

   cin >> C1 >> C2;

   gcd = __gcd(C1, C2);
   lcm = C1 * C2 / gcd;
   cout << gcd << "\n" << lcm << "\n";
}