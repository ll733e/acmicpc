#include <iostream>

using namespace std;

int   dp[101][100001];
int   w[101], v[101];

int main() {
   int   n, k;
   int   i, j;

   cin >> n >> k;
   
   for(i = 1; i <= n; i++)
      cin >> w[i] >> v[i];
   for(i = 1; i <= n; i++) {
      for(j = 1; j <= k; j++) {
         if (j >= w[i])
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
         else
            dp[i][j] = dp[i - 1][j];
        }
    }

   cout << dp[n][k];
}