#include<bits/stdc++.h>
using namespace std;
int main( ){
list<int >l;

l.push_back(23);
l.push_back(90);
l.push_back(78);
l.push_back(45);
l.push_front(19);
for(auto val: l)
cout<< val<< " ";
cout<< endl;
 l.pop_back();
 l.pop_front();
 l.erase(l.begin());
 for(auto val: l)
cout<< val<< " ";
return 0;
}