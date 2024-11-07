#include<iostream>
int sum(int *arr ,int n){
    int ans=0;
    for(int i=0;i<n;i++){
            ans+=arr[i];
}
return ans;
}
using namespace std;
int main( ){

int n;
cin>>n;

int *arr=new int [n];

for(int i=0;i<n;i++){
            cin>>arr[i];
}

cout<< sum(arr,n);

delete [] arr;
return 0;
}