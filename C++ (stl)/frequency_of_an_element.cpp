#include<bits/stdc++.h>
using namespace std;
int main( ){
int arr[]={1,2,2,3,4,4,5,7,4,6,3,4,4,4,4,4,4,5,6,3,2,};
int n=sizeof(arr)/sizeof(arr[0]);
 sort(arr,arr+n);      //this is optional if array is sort before 
 for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
// auto val=upper_bound(arr,arr+n,2)-arr;
// auto val2=lower_bound(arr,arr+n,2)-arr ;
// auto val3=val-val2;
// cout<<endl<<val3;

//     another type 
int ele;
cin>>ele;
cout<<upper_bound(arr,arr+n,ele) -lower_bound(arr,arr+n,ele) ;

return 0;
}