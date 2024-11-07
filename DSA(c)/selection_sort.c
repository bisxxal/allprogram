#include<stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int small = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[small]){
                small = j;
            }
        }
        if(small != i){
            swap(&arr[small] ,&arr[i]);
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