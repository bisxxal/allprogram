#include<bits/stdc++.h>
using namespace std;

void bubble(int *arr ,int n){
    bool issorted;
    for(int i=0;i<n-1 ;i++){
        issorted=false;
        for(int j=i;j<n;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

                issorted =true;
            }
        }
        if (issorted==false)
        break;
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
    bubble(arr, n);
    print(arr, n);
 
return 0;
}