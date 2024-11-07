#include<bits/stdc++.h>
using namespace std;
int main( ){
// int *p=NULL;
// int val=90;
// p=&val;
// int *ptr2=p ;
// cout<< *p<<endl<< &p<<endl<< p<<endl;
// cout<< "post increment pointer " << (*p)++;
// cout<<endl<<"Before increment"<< *ptr2<<endl<<&ptr2;
// ++*ptr2;
// *ptr2=*ptr2+1;
// (*ptr2)++;
// // *ptr2++;
// cout<<endl<<"After increment"<< *ptr2<<endl<<&ptr2;

///                     incrementing pointer

int i=3;
int *t=&i;
cout<<"t is "<< *t <<"\t"<<"Adress is "<< &t<<endl;
*t=*t+1;
cout<<endl<< " T is "<< *t<<" "<< t;

return 0;
}