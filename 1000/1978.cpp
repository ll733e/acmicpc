#include <iostream>
using namespace std;

bool isprime(int num) {
   int   i;
   if(num < 2) return false;
   for(i = 2 ; i * i <= num ; i++) {
      if(num % i == 0) return false;
   }
   return true;
}

int main() {
   int   N, NUM[100], PRNUM;
   int   i, j;

   cin >> N;

   for(i = 0, PRNUM = 0 ; i < N ; i++) {
      cin >> NUM[i];
      PRNUM += isprime(NUM[i]);
   }
   cout << PRNUM << "\n";
   
}