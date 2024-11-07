#include<bits/stdc++.h>
using namespace std;
int rvs(vector<int >v,int m){

    int s=m+1,e=v.size()-1;    // if specfice index is given then s->is stats of m;
    while (s<=e)
    {
    swap(v[s],v[e]);
    s++;
    e--;
    }
    for(auto val: v)
cout<< val<< " ";
 
}
// void print (vector<int >v){

int main( ){

vector<int >v;
v.push_back(23);
v.push_back(3);
v.push_back(2);
v.push_back(98);
v.push_back(78);
v.push_back(56);
// reverse(v.begin(),v.end());
//  for(auto val: v)
// cout<< val<< " ";
int m;
cout<<"Enter specfie postion : "<<endl;cin>>m;
 rvs(v,m);
// print(ans);
return 0;
}