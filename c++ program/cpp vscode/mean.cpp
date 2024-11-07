#include <bits/stdc++.h>
using namespace std;

void findmean(float *arr, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    float total = sum / n;
    cout << "MEAN IS :" << total << endl;
}

float median(float arr[], int n)
{
    sort(arr, arr + n);
    if (n % 2 == 0)
        return (arr[n / 2 - 1] + arr[n / 2]) / 2;
    return arr[n / 2];
}

float mode(float arr[], int n)
{
    sort(arr, arr + n);
    int max_count = 1, res = arr[0], count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            count++;
        else
        {
            if (count > max_count)
            {
                max_count = count;
                res = arr[i - 1];
            }
            count = 1;
        }
    }
    if (count > max_count)
    {
        max_count = count;
        res = arr[n - 1];
    }
    return res;
}
int main()
{
    float arr[23] = {4, 8, 7, 6, 4, 2, 4, 4, 1, 2};
    int n = 10;
    findmean(arr, n);
    cout << "\nMedian = " << median(arr, n);
    cout << "\nMode = " << mode(arr, n);
}