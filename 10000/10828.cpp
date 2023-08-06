#include <iostream>
using namespace std;

struct stack {
   int   arr[10000];
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
   string   str;
   int      n, num;

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   cin >> n;
   s.init();
   for( ; n-- ;) {
      cin >> str;
      if(str == "push")  { cin >> num; s.push(num); }
      if(str == "pop")   { cout << s.pop() << "\n"; }
      if(str == "size")  { cout << s.size() << "\n"; }
      if(str == "empty") { cout << s.empty() << "\n"; }
      if(str == "top")   { cout << s.top() << "\n"; }
   }
   
}