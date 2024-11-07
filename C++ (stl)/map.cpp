
// #include<bits/stdc++.h>
// using namespace std;
// void display(map<int ,string > &m){
//     for(auto &val: m){
//         cout<<val.first<<" "<<val.second<<endl;
//     }
    
// }
// int main( ){
// map<int ,string > m;
// m[0]="bisxal";
// m[5]="musa";
// m[2]="goutam";
// m[7]="tikili";
// m.insert({4,"abhi"});
// // m.erase(9);               ///this is erase function 
// // **************************** OLD METHOD ********************************

// // map<int ,string>::iterator it;
// // for(it = m.begin();it!= m.end();it++){
// //     cout<<(*it).first<< " "<<(*it).second<<endl;
// // }
// auto df=m.find(5) ;               ///for search the value  
// if(df==m.end()){
//     cout<<"Data not found ";
// }
// else{
//     cout<<"data is "<< df->first<<" "<<df->second<<endl<<endl;
// }
// m.clear();
// display(m);

// // cout<<df;
// return 0;
// }

// --------------------------------------------------------USER INPUT IN MAP ---------------------------------------

#include<bits/stdc++.h>
using namespace std;
int main( ){
int n,a,b;
cin>>n;
map<int ,int >m;

for(int i=0;i<n;i++){
    cin>>a>>b;
    m.insert(make_pair(a,b));
}
cout<< "printing values : "<<endl;
for(auto val:m)
cout<<val.first<<" "<<val.second<<endl;
 
return 0;
}