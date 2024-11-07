#include<bits/stdc++.h>
using namespace std;
void print (int *arr ,int n){
        for(int i=0;i<n;i++){
            cout<< arr[i]<<" ";
        }
}
void swapalt(int *arr,int n){

        for(int i=0;i<n;i+=2){
            if (i+1<n)
                swap(arr[i],arr[i+1]);
        }
}
int main( ){
int odd[]={12,23,44,234,1,21,23};
int n=sizeof(odd)/sizeof (odd[0]);
swapalt(odd , n );

print(odd , n );
 
return 0;
}