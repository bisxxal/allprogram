#include <stdio.h>  

void display(int* a ,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
  void swap(int* a ,int n){ 
    int temp,i;
    for ( i=0;i<n;i++){
        printf(" paas is %d\n",i+1);
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
            
        }
    }
  }

  void adativeswap(int* a ,int n){
    int temp,i;
int issorted=0;
    for (int i=0;i<n;i++){
        printf("paas is %d\n",i+1);
        issorted=1;
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
               issorted=0;
            }
        }
        if (issorted)
        return ;
    }
  }
int main()  
{   
    int a[]={34,56,57,54,89,78,12};
    // int a[]={3,4,5,6,7,8,9};
    int n=7;
    display(a,n);
    // swap(a,n);
    adativeswap( a , n);
    display(a,n);
    return 0;  
}    