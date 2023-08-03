#include <iostream>

using namespace std;

int main() {
   int   N, k = 0, ans;
   
   while(cin >> N) {
      ans = 1; k = 1;

      while(1) {
         if(ans % N == 0) 
            break;
         else {
            k++;
            ans = (ans*10 + 1) % N;
         }
      }
      cout << k << "\n";
   }
}