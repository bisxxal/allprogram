#include<bits/stdc++.h>
using namespace std;
int first(int *arr,int n,int key){
    int start=0,end = n-1;
    
int ans=-1;
    while (start<=end)
    {
        int mid=(start+end)/2;
       if(key>arr[mid])
        start=mid+1;
 
        else if(key<arr[mid]) {
            end=mid-1;
        }
      
  else  {
       ans=mid;
       end=mid-1;
        }
    }

    return ans ;
}
int last(int arr[], int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
 
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
  
        else {
            res = mid;
            low = mid + 1;
        }
    }
    return res;
}

int main( ){
int arr[]={0,1,1,1,1,1,1 ,2,2,2,3,3,3,3,4,4,4};
int n=sizeof(arr)/sizeof(arr[0]);
 
 cout << "\nLast Occurrence = " << last(arr, 1, n);
 cout << "\nfirstOccurrence = " << first(arr, n,1);

//  --------------------------------------find frequncy of ann array-------------------------------

int  fre=last(arr, 1, n)-first(arr, n,1);
cout<<endl<<"frequncy of 1 is :"<< fre+1;
return 0;
}