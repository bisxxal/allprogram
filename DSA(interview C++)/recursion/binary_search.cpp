#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int s, int e)
{

    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool binarysearch(int *arr, int s, int e, int k)
{
    print(arr, s, e); // not nessersary only undersatand
                      // base case
    if (s > e)
        return false;
    // base case
    int mid = s + (e - s) / 2;
    cout << "Mid is :" << arr[mid] << endl;
    if (arr[mid] == k)
        return true;

    if (arr[mid] < k)
        return binarysearch(arr, mid + 1, e, k);
    else
        return binarysearch(arr, s, mid - 1, k);
}
int main()
{
    int arr[] = {20, 23, 23, 45, 78,6,78,123,678, 56,23,88};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    int key;
    cin >> key;
    if (binarysearch(arr, 0, n - 1, key))
        cout << "found";

    else
        cout << " Not found";

    return 0;
}