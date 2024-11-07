#include <iostream>
using namespace std;

bool issorted(int *arr, int n)
{
    if (n == 1 || n == 0)
        return true;
    if (arr[0] > arr[1])
        return false;
    else
    {
        bool ans = issorted(arr+1, n - 1);
        return ans;
    }
}
int main()
{
    int arr[] = { 20, 23, 23, 45, 78, 88 };
    int n = sizeof(arr) / sizeof(arr[0]);
    if (issorted(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";
}