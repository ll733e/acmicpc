#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   int  N, i, ans;

   cin >> N;

   vector<int>A(N);
   vector<int>B(N);

   for(i = 0 ; i < N ; i++)
      cin >> A[i];

   for(i = 0 ; i < N ; i++)
      cin >> B[i];
   
   sort(A.begin(), A.end(), greater<int>());
   sort(B.begin(), B.end());
   
   for(i = 0, ans = 0 ; i < N ; i++)
      ans += A[i] * B[i];

   cout << ans;
}
