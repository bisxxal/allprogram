#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    if (n==0)
    return 1;
    
 
   return fun(n-1)*n;
  
}
int main( ){
int n;cin>>n;
 cout<<fun(n);
 
return 0;
}