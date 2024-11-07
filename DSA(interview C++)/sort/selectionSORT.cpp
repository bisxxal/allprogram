#include <bits/stdc++.h>
using namespace std;

void selection(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minval = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minval])
                minval = j;
        }
        swap(arr[minval], arr[i]);
    }
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[10] = {9, 8, 7, 6, 5, 4, 3};
    int n = 7;
    selection(arr, n);
    print(arr, n);
    return 0;
}