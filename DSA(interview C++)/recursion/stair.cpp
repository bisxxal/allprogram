#include<bits/stdc++.h>
using namespace std;

int  staircount(int n){

    if(n==0)
    return 1;
    if(n<0)
    return 0;

    return staircount(n-1)+staircount(n-2);

}
int main( ){
int n;
cin>>n;
cout<< staircount(n);
return 0;
}