#include<bits/stdc++.h>
using namespace std;
 void saydigit(int n ,string arr[]){

    if(n==0)
    return ;

    // processing 
    int digit=n%10;
    n=n/10;

    saydigit(n, arr);
   cout << arr[digit]<<" ";
}
int main( ){
string arr[11]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
int n;
cin>>n;
saydigit(n ,arr);
cout<<endl;
return 0;
}