#include <iostream>
using namespace std;

#define case 20

int main() {
   int   T;
   int   i, j, n;
   int   DP[case];

   ios_base::sync_with_stdio(false); 
   cin.tie(NULL); 
   cout.tie(NULL);

   for(i = 3, DP[0] = 1, DP[1] = 2, DP[2] = 4 ; i < case ; i++) 
      DP[i] = DP[i-3] + DP[i-2] + DP[i-1];
   
   cin >> T;
   for(i = 0 ; i < T ; i++) {
      cin >> n;
      cout << DP[n-1] << "\n";
   }

}