#include <iostream>
using namespace std;

struct stack {
   int   arr[1000000];
   int   last = -1;

   void  init()      { last = -1; }
   void  push(int x) { arr[++last] = x; }
   bool  empty()     { return (last < 0); }
   int   pop()       { if(empty()) return -1; return arr[last--]; }
   int   size()      { return last + 1; }
   int   top()       { if(empty()) return -1; return arr[last]; }
};

int main() {
   stack    s;
   int      cmd;
   int      n, num;

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   cin >> n;
   s.init();
   for( ; n-- ;) {
      cin >> cmd;
      if(cmd == 1)   { cin >> num; s.push(num); }
      if(cmd == 2)   { cout << s.pop() << "\n"; }
      if(cmd == 3)   { cout << s.size() << "\n"; }
      if(cmd == 4)   { cout << s.empty() << "\n"; }
      if(cmd == 5)   { cout << s.top() << "\n"; }
   }
   
}