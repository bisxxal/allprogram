// #include<bits/stdc++.h>
// using namespace std;
// void display(set<string >&m){
//     for(auto &val: m){
//         cout<<val<<endl;
//     }
// }
// int main( ){
// // set<string>s;
// // s.insert("nshljio");
// // s.insert("aretgq5ae");
// // s.insert("aertgearg");
// // // s.erase("nshljio");         //erase function 
// // display(s);

// // auto it=s.find("nshljio");             //find function


// // if(it!=s.end()){
// //     cout<<"data is "<< *it;
// //     }
// // else 
// // cout<<"data not found ";

// // display(s);

// // ------------------------------------------------------- how to insert array in set ----------------------------------------------

// int arr[]={9,8,8,7,6,5,54,4,23,2,};
// int n=sizeof(arr)/sizeof (arr[0]);

// set<int >s;
// for (int i=0;i<n;i++){
//     s.insert(arr[i]);
// }
// for(auto &val: s)
// cout<< val<<" ";

// if (s.find(8)!=s.end())
// cout<<endl<<"find :"<<*s.find(8)<<endl;
// s.erase(23);
// // s.clear();
// cout<<"Lowe bound is :"<<*s.lower_bound(5)<<endl<<"upper bound is :"<<*s.upper_bound(5)<<endl;
// for(auto &v: s)
// cout<< v<<" ";
// return 0;
// }


// ----------------------------------------------- USER INPUT IN SET -------------------------------------

#include<bits/stdc++.h>
using namespace std;
int main( ){
int n,a;
cin>> n;
set<int >s;

for(int i=0;i<n ;i++){
    cin>>a ;
    s.insert(a);
}
cout<< "printing value :"<<endl;
for(auto val: s)
cout<< val<< " ";
return 0;
}