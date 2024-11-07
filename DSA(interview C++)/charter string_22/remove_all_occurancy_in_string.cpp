#include<bits/stdc++.h>
using namespace std;
string occcu(string s,string part){

    while(s.length()!=0&& s.find(part)<s.length()){
        s.erase (s.find (part),part.length());
    }
    return s;
}
int main( ){
string s="daabcbaabcbc";
string part="abc";
// string ans=
cout<< occcu(s,part);
return 0;
}