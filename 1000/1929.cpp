#include <iostream>
using namespace std;

inline void ptprime(int num) {
   int   i;
   if(num < 2) return;
   for(i = 2 ; i * i <= num ; i++) {
      if(num % i == 0) return;
   }
   cout << num << "\n";
}

int main() {
   int   start, end, i;

   ios_base::sync_with_stdio(false); 
   cin.tie(NULL); 
   cout.tie(NULL);

   cin >> start >> end;

   for(i = start ; i <= end ; i++)
      ptprime(i);
   
}