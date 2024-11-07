// #include<bits/stdc++.h>
// using namespace std;
// int main( ){
// int arr[ ]={13,13,13,56,16,16,16,17,17,17,17,18,18};
// int n=12;
// sort(arr,arr+n);
// for(int i=0;i<n;i++)
// cout<<arr[i]<<" ";
// cout<<endl<<endl;
// int ptr=upper_bound(arr,arr+n,16)-arr;   // returns the index position of itr element in array
// int *ptr2=upper_bound(arr,arr+n,16);
// cout<<(ptr)<<endl;
// cout<<(*ptr2)<<endl;
// }
// ---------------------------------------------vectors upperbound and lowerbound --------------------------------------
 
#include<bits/stdc++.h>
using namespace std;
int main( ){
vector<int >v={1,2,5,5,7,9};
 //--------------------------------LOWWER BOUND---------------------------
// auto val = lower_bound(v.begin(),v.end(),5);
// auto val1 = lower_bound(v.begin(),v.end(),10);  //if the vallue is not present the ther no bigger value in vector it will take the next value adress
// auto val2 = lower_bound(v.begin(),v.end(),6);

 //--------------------------------UPPER BOUND---------------------------

auto val = upper_bound(v.begin(),v.end(),5) ;
auto val1 = upper_bound(v.begin(),v.end(),10);  //if the vallue is not present the ther no bigger value in vector it will take the next value adress 
auto val2 = upper_bound(v.begin(),v.end(),2);
cout<<*val<<endl;
cout<<*val1<<endl;
cout<<*val2<<endl;
return 0;
}