#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
   int   t, n;
   int   i, j;
   long long   sum;

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   cin >> t;
   for(; t > 0 ;t--) {
      cin >> n;
      vector<int> gcd(n);
      for(i = 0 ; i < n ; i++)
         cin >> gcd[i];

      for(i = 0, sum = 0 ; i < n - 1 ; i++) {
         for(j = i + 1 ; j < n ; j++)
            sum += __gcd(gcd[i], gcd[j]);
      }

      cout << sum << "\n";
   }

}