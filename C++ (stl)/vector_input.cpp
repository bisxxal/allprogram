// #include<bits/stdc++.h>
// using namespace std;
// int main( ){
// int a,n;
// cin>>n;
// vector<int >v ;
 
// for(int i=0;i<n;i++){
//     cin>>a;
//     v.push_back(a);
// }
// cout<<"SIZE IS "<<v.size()<<"CAPACITY IS "<< v.capacity()<<endl;
// for(auto &val:v)
// cout<<val<<" ";
// cout<< endl;
// return 0;
// }
// ---------------------------------------------------        how to input 2d vector    ------------------------------
#include<bits/stdc++.h>
using namespace std;
 
int main() {
  vector<vector<int >>v ;
   int row ,a,columb;
   cout<<"enter how many time loop will execute "<<endl;
 cin>>row;
for(int i=0;i<row;i++){
    cout<<"enter input : " ;
        cin>>columb;
        
        vector<int >p;
        for(int j=0;j<columb;j++){
               
            cin>>a;
            p.push_back(a);
        }
  v.push_back(p);  // here is push back  is  p becuese in outer vector the vector is a vector not integer if integer is delcere the we pass couumb in function 
}
for(auto  val : v)
{
    for(auto  val2:val)
        cout<<val2<< " ";  
}
   cout<<endl;
   return 0;
}