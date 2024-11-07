#include <stdio.h>
int main()
{int pos,arr [10]={1,2,3,4,5};
int n=5,val;
 
scanf("%d",&pos);
 
    for(int i = pos; i <= n-1; i++)
        arr[i]=arr[i+1];
  
 printf("printing arr");
 n--;
 for(int i=0;i<n;i++)
 printf("%d ", arr[i]);
 
 return 0;
}