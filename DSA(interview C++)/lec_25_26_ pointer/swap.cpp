#include<iostream>
using namespace std;
int fun(int  &a,int  &b){
   swap(a,b);
 
}
int main( ){
int a=8,b=5;

fun(a,b);
cout<<a<<" "<<b;
return 0;
}