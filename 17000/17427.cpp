#include <iostream>
using namespace std;

int main() {
   int   N, i;
   long long sum = 0;
   cin >> N;
   
   for(i = 1 ; i <= N ; i++) 
      sum += (N/i) * i;

   cout << sum << "\n";

}