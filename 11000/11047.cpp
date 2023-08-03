#include <iostream>
using namespace std;

int main() {
   int   type[10];
   int   n, k, sum, cnt, total;
   int   i;

   cin >> n >> k;

   for(i = 0, sum = 0 ; i < n ; i++)
      cin >> type[i];


   for(i = n - 1, total = 0 ; i > 0 ; i--) {
      cnt = (k - sum) / type[i];
      total += cnt;
      sum += cnt * type[i];
   }
   total += k - sum;

   cout << total;
}