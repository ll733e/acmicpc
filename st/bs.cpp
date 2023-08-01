#include <iostream>
using namespace std;

int BinarySearch(int *array, int n, int target) {
   int middle, low = 0, high = n - 1;
   while(low <= high) {
      middle = (low + high) / 2;
      if(array[middle] == target)
         return middle;
      else if(array[middle] < target)
         low = middle + 1;
      else
         high = middle - 1;
   }
   return -1;
}

int main() {
   int arr[] = { 1, 3, 6, 7, 10, 14, 16 };
   int n = sizeof(arr) / sizeof(arr[0]);


   cout << BinarySearch(arr, n, 10) << "\n";

}