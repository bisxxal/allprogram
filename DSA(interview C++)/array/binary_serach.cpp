#include<bits/stdc++.h>
using namespace std;
int bsearch(int *arr,int n,int key){
    int start=0,end = n-1;
    int mid=(start+end)/2;

    while (start<=end)
    {
        if (key==arr[mid]){
            return mid;
        }
        //goin to right side of mid 
        if(key>arr[mid])
        start=mid+1;
 //goin to left side of mid
        else{
            end=mid-1;
        }
         mid=(start+end)/2;

    }
    return -1;
}
int main( ){
int arrodd[9]={3,5,7,9};

int arreven[7]={2,4,6,8,10};
int index=bsearch(arrodd,4,7);
int index2=bsearch(arreven,5,10);
cout<<"index of 7 is "<<index<<endl;
cout<<"index of 10 is "<<index2<<endl;
return 0;
}