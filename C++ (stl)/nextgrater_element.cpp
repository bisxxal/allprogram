#include <bits/stdc++.h>
using namespace std;
void nextGreaterElements(int arr[], int n) {
   stack<int> s;
   s.push(arr[0]);
   for (int i = 1; i < n; i++) {
      if (s.empty()) {
         s.push(arr[i]);
         continue;
      }
      while (!s.empty() && s.top() < arr[i]) {
         cout << s.top() << " -> " << arr[i] << endl;
         s.pop();
      }
      s.push(arr[i]);
   }
   while (!s.empty()) {
      cout << s.top() << " -> " << -1 << endl;
      s.pop();
   }
}
int main() {
   int arr[] = { 1, 2, 3, 4, 5 };
   int n = 5;
   nextGreaterElements(arr, n);
   return 0;
}