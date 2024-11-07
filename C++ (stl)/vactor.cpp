#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for (int i=0;i< v.size();i++){
        cout<<v[i]<<" ";
        
    }
    // cout<<endl;
}
int main(){
    // vector<int> vec1;
    // int element,size;
    // cout<<"enter the size  of vector"<<endl;
    // cin>>size;
    // for (int i=0;i<size;i++){
    //     cout<<"enter the element add to this vector "<<endl;
    //     cin>>element;
    //     vec1.push_back(element );
    // }
    // vec1.pop_back();                      ///this is used to delete the last element of the vector 


    // display(vec1);

    //insert function 

    // vector<int>:: iterator iter=vec1.begin();
    // vec1.insert(iter+3,10,34334);
    // display(vec1);


                                   // new code
vector<pair<int ,int >>v2 ;

//  for (int i=0;i<v2.size();i++){
//     cout<<v2[i].first<<" "<<v2[i].second<<endl;
//  }
/// pusing element into vector in arry 
int a[]={12,34,34,54,3};
int a2[]={1,54,4,63,54};
for (int i=0;i<sizeof(a)/sizeof(a[0]);i++){
    v2.push_back(make_pair(a[i],a2[i]));
}
int i;
for(i=0;i<v2.size();i++){
    cout<<v2[i].first<<" "<<v2[i].second<<endl; 
}
sort(v2.begin(),v2.end());
// using auto variablr 
for(auto &val: v2){
    cout<< val.first<<" "<<val.second<<endl;
}
return 0;
}
