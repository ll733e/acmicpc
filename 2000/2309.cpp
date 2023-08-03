#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int   key[9], rkey[7];
   int   sum, no1, no2;
   int   i, j, t;

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   for(i = 0, sum = 0 ; i < 9 ; i++) {
      cin >> key[i];
      sum += key[i];
   }
   for(i = 0 ; i < 9 ; i++) {
      for(j = i ; j < 9 ; j++) {
         if(((sum - (key[i] + key[j])) == 100) && (i != j)) {
            no1 = i;
            no2 = j;
         }
      }
   }
   for(i = 0, t = 0 ; i < 9 ; i++) {
      if(i == no1 || i == no2) continue;
      else rkey[t++] = key[i];
   }

   sort(rkey, rkey+7);
   for(i = 0 ; i < 7 ; i++) cout << rkey[i] << "\n";
}