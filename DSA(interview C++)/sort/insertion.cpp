#include<bits/stdc++.h>
using namespace std;
void insertion (int *arr,int n){
int j;
    for(int i=1;i<n;i++){

        int temp=arr[i];
        for(j=i-1;j>=0;j--){

            if (arr[j]>temp)
            arr[j+1]=arr[j];
      
        else
        break; 
         }
         arr[j+1]=temp;

    }
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main( ){
 
    int arr[10] = {9, 8, 7, 6, 5, 4, 3};
    int n = 7;
    print(arr, n);
    cout<<endl;
    insertion(arr, n);
    print(arr, n);
 
return 0;
}