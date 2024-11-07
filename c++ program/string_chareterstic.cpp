#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
void display(string &str){
    cout<<"size is = "<<str.size()<<endl;
    cout<<"lenght is = "<<str.length()<<endl;
    cout<<"capacity is = "<<str.capacity()<<endl;
    cout<<"maxsize is = "<<str.max_size()<<endl;
    cout<<"empty = "<<(str.empty()?"yes":"no")<<endl;
}
int main( ){
string str;
display(str);
string  str2;
cout<<"enter the string "<<endl;
cin>>str2;
display(str2);
str.resize(23);            //resize string 
display(str);
return 0;
}