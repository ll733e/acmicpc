#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int   C1, C2, gcd;
   int   T, i;

   ios_base::sync_with_stdio(false); 
   cin.tie(NULL); 
   cout.tie(NULL);

   cin >> T;
   for(i = 0 ; i < T ; i++) {
      cin >> C1 >> C2;
      cout << (C1 * C2) / __gcd(C1, C2) << "\n";
   }
}