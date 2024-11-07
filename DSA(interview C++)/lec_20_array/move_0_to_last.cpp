#include<bits/stdc++.h>
using namespace std;

void move(int *arr,int n){
        int i,nonzero=0;
        for(i=0;i<n;i++){
        if (arr[i]!=0){
                swap(arr[i],arr[nonzero]);
                nonzero++;
        }
        }for(int i=0;i<n ;i++)
   cout<< arr[i]<< " ";
}
int main( ){

    int arr[] = {1, 0, 46, 0, 23,0,45,0};
    int n = sizeof(arr) / sizeof(arr[0]);
 
//  for (int f = 0; f<n+m; f++)
//         cout << arr3[f] << " ";
move(arr,n);

return 0;
}