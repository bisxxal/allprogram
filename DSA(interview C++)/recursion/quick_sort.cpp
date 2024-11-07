#include <bits/stdc++.h>
using namespace std;
int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {

        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // place pivort at right postion
    int pivotindex = s + count++;
    swap(arr[pivotindex], arr[s]);
    // left and right
    int i = s, j = e;

    while (i < pivotindex && j < pivotindex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}
void quicksort(int *arr, int s, int e)
{

    if (s >= e)
        return;
    int p = partition(arr, s, e);
    // left part
    quicksort(arr, s, p - 1);
    // right part
    quicksort(arr, p + 1, e);
}
int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
