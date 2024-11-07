#include<bits/stdc++.h>
using namespace std;

void roatit(int *arr,int n,int d){
            int temp[n],k=0;

    for(int i=d;i<n;i++){
        temp[k++]=arr[i];
        // k++;
    }

      for(int i=0;i<d;i++){
        temp[k]=arr[i];
        k++;
    }

    for(int i=0;i<n;i++){
    arr[i]=temp[i];
}

    for(int i=0;i<n;i++){
    cout<< arr[i]<<" ";
}
}
int main( ){

int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
 
// rotate(arr,arr+5,arr+n);     this is roate function we can use this to roate the array
 
int d=3;
roatit(arr,n, d);
// for(int i=0;i<n;i++){
//     cout<< arr[i]<<" ";
// }
return 0;
}