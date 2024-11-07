#include<iostream>
#include<vector>
using namespace std;
int main( ){
vector<int> v={9,54,5,6,7,8,};
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}cout<<endl;
vector<int> :: iterator it = v.begin();
cout<<(*it+1)<<endl;
cout<<(*(it+1))<<endl;                //print second element of vector 


//print all element of vector
for( it=v.begin();it!=v.end();++it){
    cout<<(*it)<<endl;
}
// print pair of vector s itrater
vector<pair<int ,int >> gb =  {{1,2},{3,4},{5,6},{7,8}};
vector<pair<int ,int >> :: iterator ti;
for(ti=gb.begin();ti!=gb.end();++ti){
        cout<<(*ti).first<<" "<<(*ti).second<<endl;
}
// declare another type
for(ti=gb.begin();ti!=gb.end();++ti){
        cout<<(ti->first)<<" "<<(ti->second)<<endl;
}
return 0;
}