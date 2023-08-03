#include <iostream>
using namespace std;

inline long long frac(int n, int x) {
   int   sum = 0;
   while(1) {
      if((n /= x) == 0) break;
      sum += n;
   }
   return sum;
}

int main() {
   long long   NMB_5 = 0;
   long long   NMB_2 = 0;
   int   n, m;
   
   cin >> n >> m;

   NMB_5 = frac(n, 5) - frac(n - m, 5) - frac(m, 5);
   NMB_2 = frac(n, 2) - frac(n - m, 2) - frac(m, 2);

   cout << min(NMB_2, NMB_5) << "\n";
}