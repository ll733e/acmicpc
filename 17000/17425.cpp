#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

int         MAX = 1000000;
long long   dp[1000001];
long long   n[1000001];

int main() {
   int i, j, C, P;
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL); 
   cout.tie(NULL);
   
   fill_n(dp, MAX + 1, 1);
   
   for (i = 2 ; i <= MAX ; i++) {
      for (j = 1 ; i * j <= MAX ; j++)
         dp[i * j] += i;
   }

   for (i = 1; i <= MAX; i++)
      n[i] = n[i - 1] + dp[i];
   
   cin >> C;
   while (C--) {
      cin >> P;
      cout << n[P]<<"\n";
   }
}