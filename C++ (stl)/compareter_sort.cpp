#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b){  // using comparater for accending and decending order
    return a>b;
}
int main(){
vector<int > v;
// v.push_back(12345);
int a,i,n;
cin>>n;
for(i=0;i<n;i++){
cin>>a;
v.push_back(a);
}
cout<<"Befor Sort"<<endl;
for(auto val:v){
    cout<<val<<" ";
}
cout<<endl;
sort(v.begin(),v.end(),comp);
cout<<"After Sort"<<endl;
for(auto val:v){
    cout<<val<<" ";
}
cout<<endl;
return 0;

}