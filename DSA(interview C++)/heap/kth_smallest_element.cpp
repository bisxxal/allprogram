#include<bits/stdc++.h>
using namespace std;

int findKthSmalles(int arr[] , int l , int r, int k){
        priority_queue<int>pq;

        //step 1;
        for(int i=0;i<k ;i++){
            pq.push( arr[i]);

        }
        //step 2 
        for(int i=k ; i<=r ;i++){
            if(arr[i] < pq.top())
            pq.pop();
            pq. push(arr[i]);
        }
        //ans return
        int ans = pq.top();
        return ans;
}
int main( ){

  
   int arr[]={7 ,10 ,4 ,3, 20, 15};
   int n = 6;
    int k = 3;
   
    cout << findKthSmalles(arr ,0, n , k);
 
return 0;
    
}       