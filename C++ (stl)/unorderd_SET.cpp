#include<bits/stdc++.h>
using namespace std;
int main( ){
int n,a;
cin>>n;
unordered_set<int >s;
for(int i=0;i<n;i++){
    cin>>a;
    s.insert(a);
}

for(auto val:s)
cout<< val<<" ";
// cout<<"Lowe bound is :"<<*s.lower_bound(5)<<endl<<"upper bound is :"<<*s.upper_bound(5)<<endl;
return 0;
}