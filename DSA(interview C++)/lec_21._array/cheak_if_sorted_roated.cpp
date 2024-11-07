#include<bits/stdc++.h>
using namespace std;

int checkRotatedAndSorted(int *arr, int n){

            int x=0,y=0;
            for(int i=0;i<n-1;i++){
                if (arr[i]<arr[i+1])
                x++;
                else y++;
            }
            //  If till now both x,y are greater than 1 means
    // array is not sorted. If both any of x,y is zero
    // means array is not rotated.
    if (y==1){
            if (arr[n-1]<arr[0])
                x++;
                else 
                y++;

        if (y==1)
        return true;
    }
    return false ;
}
int main( ){
int arr[]={ 6,7, 1, 2 ,3 ,4 ,5 };
    int  n = sizeof(arr) / sizeof(arr[0]);
    if (checkRotatedAndSorted(arr, n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

return 0;
}