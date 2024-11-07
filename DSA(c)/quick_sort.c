#include <stdio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int patition(int arr[], int low, int high)
{

    int pivot = arr[high];

    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    printf("%d\n",i+1);
    return (i + 1);
}
void quick(int arr[], int low, int high)
{

    if (low < high)
    {
        int pi = patition(arr, low, high);
        quick(arr, low, pi - 1);
        quick(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {23,45,78,34,567,63,34};
    int N = sizeof(arr) / sizeof(arr[0]);
 
    quick(arr, 0, N - 1);
    printf("Sorted array: \n");
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    return 0;
}