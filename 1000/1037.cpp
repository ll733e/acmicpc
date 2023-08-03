#include <iostream>
using namespace std;

int main() {
   int   N, G[50];
   int   i, min, max;

   cin >> N;
   for(i = 0 ; i < N ; i++)
      cin >> G[i]; 
   
   min = G[0]; max = G[0];
   for(i = 0 ; i < N ; i++) {
      if(G[i] > max) max = G[i];
      if(G[i] < min) min = G[i];
   }
   
   cout << min * max << "\n";
   
}