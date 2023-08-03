#include <iostream>
using namespace std;

#define MAX 1000005

int main() {
   int   n, i, j, right, left;
   bool  num[MAX] = { 0, };
   bool  check;
   
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   

   for(i = 2 ; i * i <= MAX ; i++) {
        if(num[i] == false) {
            for(j = i * i ; j <= MAX ; j += i)
               num[j] = true;
         }
   }

   while(1) {
      cin >> n;
      if(n == 0) break;

      left = 3;
      right = n - 3;
      
      while(left <= right) {
         if(num[left] == false && num[right] == false)
            break;
         left += 2;
         right -= 2;
      }
      if(left > right)
         cout << "Goldbach's conjecture is wrong.\n";
      else
         cout << n << " = " << left << " + " << right << "\n";

   }
}
 