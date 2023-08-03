#include <iostream>
using namespace std;

int main() {
   int   cur, in, out, max, i;

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   for(i = 0, max = 0, cur = 0 ; i < 4 ; i++) {
      cin >> out >> in;
      cur += in - out;
      if(cur > max)  max = cur;
   }
   cout << max << "\n";
}