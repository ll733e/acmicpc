#include <iostream>
using namespace std;

int main() {
   int   x1, y1, x2, y2, x3, y3;
   int   t;

   cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

   t = (x1 * y2 - x2 * y1 + x2 * y3 - x3 * y2 + x3 * y1 - x1 * y3) / 2;
   if (t > 0)
      cout << "1";
   else if (t < 0)
      cout << "-1";
   else
      cout << "0";
}