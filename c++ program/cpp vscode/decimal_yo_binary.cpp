#include<bits/stdc++.h>
using namespace std;
int main( ){
int  arr[23],n,i;
cin>>n;
for(i=0;n>0;i++){
    arr[i]=n%2;
    n/=2;
}
 for(i=i-1;i>=0;i--){
    cout<<arr[i];
 }
return 0;
}