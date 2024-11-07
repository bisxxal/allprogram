#include<bits/stdc++.h>
using namespace std;
int main( ){
deque<int >d;
d.push_back(23);
d.push_back(19);
d.push_back(43);
d.push_front(34); 
//   d.erase(d.begin(),d.begin()+1) ;
cout<< " first index's  element of deque "<< d.at(2)<<endl;
for(auto val: d)
cout<<val<< " ";
d.pop_back();
d.pop_front();
 cout<< endl;
for(auto val: d)
cout<<val<< " ";
return 0;
}