#include<bits/stdc++.h>
using namespace std;

int sum(int n){

    if (n==0)
    return 0;

    int lastdigit=n%10;
    int remening=n/10;

    return sum(remening)+lastdigit;
}
int main( ){
    int n=1023;
cout<< sum( n);

return 0;
}