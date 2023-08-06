#include <iostream>
using namespace std;

int main() {
   string   ps;
   int  vps, N;
   int   i, j;

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   cin >> N;
   for(i = 0 ; i < N ; i++) {
      cin >> ps;
      for(j = 0, vps = 0 ; j < ps.length() ; j++) {
         if(ps[j] == '(') vps++;
         if(ps[j] == ')') vps--;
         if(vps < 0) break;
      }

      if(vps == 0)   cout << "YES\n";
      else           cout << "NO\n";
         
   }
}