#include<bits/stdc++.h>
using namespace std;
int main( ){
int  arr[]={43,5,24,23,13,34};
  int n = sizeof(arr) / sizeof(arr[0]);
for(int i=0;i<n;i++){
    cout<< arr[i]<<" ";
}
 
reverse(arr,arr+n);

// for(int i=n-1;i>=0;i--){        //using loop
//    cout<< arr[i]<<" ";
// }
cout<<endl;
for(auto it: arr)
cout<< it<<" ";

return 0;
}