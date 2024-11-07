#include <stdio.h>

void insertionSort(int arr[], int n)
{
int temp ,j;
    for (int i = 1; i < n  ; i++)
    {
        temp = arr[i];
        j = i-1;

        while(j>=0 && temp < arr[j])
 
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
 
int main()
{

    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}