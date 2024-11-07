#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int n)          // not nessersary only undersatand
{
        cout<< "size of arr "<< n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool linersearch(int *arr, int n, int k)
{
    print(arr,n); // not nessersary only undersatand
    // base case
    if (n==0)
    return false;

    if(arr[0]==k)
    return true ;

    return linersearch(arr+1,n-1,k);
    
}
int main()
{
    int arr[] = {20, 23, 23, 45, 78, 6, 78, 123, 678, 56, 23, 88};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int key;
    cin >> key;
    if (linersearch(arr, n, key))
        cout << "found";

    else
        cout << " Not found";

    return 0;
}