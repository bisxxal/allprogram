#include<bits/stdc++.h>
using namespace std;
int main( ){
int arr[23],n;
cin>> n;
for(int i=0;i<n;i++)
cin>>arr[i];

map<int ,int>m;

for(int i=0;i<n;i++){
    m[arr[i]]=m[arr[i]]+1;          //ano thour way -> m[arr[i]]++ 
}
for(auto val: m)
cout<<val.first<<"->"<< val.second<<endl;

return 0;
}