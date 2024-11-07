#include<bits/stdc++.h>
using namespace std;
int main( ){
int val=5;
int *p=&val;
int **p2=&p;
int ***p3=&p2;

cout<<&val<<" "<<p<<" "<< *p<<endl;
cout<<&p2<<" "<<*p2<<" "<< **p2<<endl;
cout<<*p3<<" "<<&*p3<<" "<< ***p3<<endl;
return 0;
}