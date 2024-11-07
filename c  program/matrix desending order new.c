#include<stdio.h>
void main()
{
    int a[50],n,j,i;
     printf("enter the range: \n");
     scanf("%d",&n);
     printf("enter the element into an array \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[i])
            {
                a[i]=a[i]+a[j];
                a[i]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}