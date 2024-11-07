#include<bits/stdc++.h>
using namespace std;
int main( ){
string str;
cin>>str;
set<char >s;
for (auto val: str)
s.insert(val);
s.size() == str.size() ? cout<<"true ":cout<<"false ";
return 0;
}