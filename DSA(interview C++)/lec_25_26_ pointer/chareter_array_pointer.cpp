#include<iostream>
using namespace std;
int main( ){
int arr[12]={1,23,3,4,3};
char ch[10]="bisxxal";

cout<< arr<<endl;
cout<< ch<<endl;
char *c=&ch[0];
cout<<*c<<endl<<c <<endl <<&c<<endl;

char temp='a';
char *p =&temp;
cout<<"Temp is :"<< p<<endl;
return 0;
}
 