#include<bits/stdc++.h>
using namespace std;
string  fill(string s){
string temp="";
    for(int i=0;i< s.length();i++){

        if (s[i]==' '){
            temp.push_back('@');
            temp.push_back('1');
            temp.push_back('0');
        }
        else {
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main( ){
string s="bisxxal kandi  gugu";
cout<< fill(s);
return 0;
}