#include <iostream>
using namespace std;

bool check[1000005] = { 0, };

int main() {
   long long min, max, tmp;
   long long i, cnt = 0;
   cin >> min >> max;

   for(i = 2 ; i * i <= max ; i++) {
      tmp = min / (i * i);
      if(min % (i * i)) tmp++;
      while(tmp * i * i <= max) {
         check[tmp * i * i - min] = 1;
         tmp++;
      }
   }
   for(i = 0 ; i <= max - min ; i++)
      if(!check[i]) cnt++;
   cout << cnt;
}