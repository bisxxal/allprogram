/// tie in pair

//                       syntax-
// tie(int &, int &) = pair1;  

#include <bits/stdc++.h>  
using namespace std;  
  
int main()  
{  
pair<int, int> pair1 = { 10, 12 };  
int p, q;  
tie(p, q) = pair1;  
cout << p << " " << q << "\n";  
  
pair<int, int> pair2 = { 16, 18 };  
tie(p, ignore) = pair2;  
  
cout << p << " " << q << "\n";  
  
pair<int, pair<int, char>> pair3 = { 16, { 18, 'p' } };  
int x, y;  
char z;  
x = pair3.first;  
tie(y, z) = pair3.second;  
cout << x << " " << y << " " << z << "\n";  
}  