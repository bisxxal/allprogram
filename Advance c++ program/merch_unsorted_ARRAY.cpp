#include<bits/stdc++.h>
using namespace std;
int main( ){

    int a[] = { 10, 5, 15, 22, 100 };  
    int b[] = { 20, 3, 2, 12, 1 };
int n=sizeof(a)/sizeof(a[0]);
int m=sizeof(b)/sizeof(b[0]);
 
int merge [m+n];

std::copy(a, a + m, merge);
    std::copy(b, b + n, merge + m);

    for (int &i: merge) {
        std::cout << i << ' ';
    } 
    cout<<endl;
    sort(merge,merge+m+n);

     for (int &i: merge) {
        std::cout << i << ' ';
    } 
return 0;
}