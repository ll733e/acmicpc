#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
   vector<int> v;
   int   N, num;
   int   i;

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   cin >> N;
   
   for(i = 0 ; i < N ; i++) {
      cin >> num;
      v.push_back(num);
   }
   sort(v.begin(), v.end());

   for(i = 0 ; i < N ; i++)
      cout << v[i] << "\n";
}