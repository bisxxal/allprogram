#include<bits/stdc++.h>
using namespace std;
int main( ){
vector<int >v{1,2,3,4,5,6,7,8,9,};
for(auto val: v)
cout<< val<<" ";
cout<< endl<< "After roate "<<endl;
rotate(v.begin(),v.begin()+2,v.end());
for(auto val: v)
cout<< val<<" ";
// ------------------------------------------------accumulate-------------------------------------------
   cout << "\nThe summation of vector elements is: ";
    cout << accumulate(v .begin(), v .end(), 0);
cout<<endl;
    // ------------------------------------------------BINARY search-------------------------
    sort(v.begin(),v.end());
if( binary_search(v.begin(),v.end(),1))
cout<< "element found "<<endl;
else 
cout<< "element not found "<<endl;
return 0;
}