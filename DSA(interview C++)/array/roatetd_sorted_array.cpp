#include <bits/stdc++.h>
using namespace std;
int bsearch(int *arr, int s,int e, int key)
{
    int start = s, end =e;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        if (key > arr[mid])
            start = mid + 1;
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int getpivot(int *arr, int n)
{
    int s = 0, e = n - 1, mid;
    while (s > e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
            e = mid;
    }
    return s;
}
void roated(int *arr,int n,int key){
    int pivort=getpivot(arr,n);

    if (key>=arr[pivort]&&key<=arr[n-1]){
        // return  bsearch( arr,pivort, n-1,key);
    }
    else 
    bsearch(arr,0,pivort-1 ,key );
}
int main()
{
    int arrodd[9] = {3, 5, 7, 9};

    
    return 0;
}