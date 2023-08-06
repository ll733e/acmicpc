#include <iostream>
using namespace std;

int main() {
   int   N, lle;
   int   i, j;

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   cin >> N;
   for(i = 1, lle = 0 ; i <= N ; i *= 10) {
      lle += N - i + 1;
   }
   cout << lle << "\n";
}
