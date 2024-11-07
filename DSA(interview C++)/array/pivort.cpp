#include<bits/stdc++.h>
using namespace std;
int getpivot(int *arr,int n){
    int s=0,e=n-1,mid ;
    while(s>e){
        mid=s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else 
        e=mid;

        
    }
    return s;
}
int main( ){

int arr[10]={3,8,10,17,2};
int n=5;
cout<<"pivert is : "<< getpivot(arr,n);
return 0;
}