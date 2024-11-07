#include<stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[],int n){
     int temp;
    for(int i=0;i<n-1;i++){

        for(int j=i+1;j<n;j++){

            if(arr[j]<arr[i])
              // Swapping
                  temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
        }
    }
}
 
int main(){

    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
  for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

     
}