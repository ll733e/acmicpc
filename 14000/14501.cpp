#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> DP(16);
vector<pair<int, int>> T(16);

int main() {
   int   N, PREV, i;
   
   cin >> N;
   
   for(i = 1 ; i <= N ; i++)
      cin >> T[i].first >> T[i].second;

   for(i = N ; i > 0 ; i--) {
      PREV = T[i].first + i;
      if(PREV > N + 1) DP[i] = DP[i + 1];
      else DP[i] = max(DP[i + 1], DP[PREV] + T[i].second);
   }
   cout << DP[1] << "\n";
}