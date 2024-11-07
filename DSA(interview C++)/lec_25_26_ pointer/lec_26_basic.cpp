#include<bits/stdc++.h>
using namespace std;
int main( ){
    // int arr[10]={12,34,14,15};
    // cout<< arr<<endl; 
    // cout<< *arr<<endl<<arr[2] <<endl<< &arr[2];

    // int i=3 ;
    // cout<<endl<<"last= "<<i[arr];

// --------------------------------------- printing size of array and pointer----------------------------

int arr[10]={45,56,12};
int *p=&arr[0];

cout<<sizeof(arr)<<endl;
cout<<sizeof(*arr)<<endl;
cout<<sizeof(&arr)<<endl;

cout<<sizeof(p)<<endl;
cout<<sizeof(*p)<<endl;
cout<<sizeof(&p)<<endl;

cout<< (&p)<<endl;
cout<< (&arr)<<endl;
return 0;
}