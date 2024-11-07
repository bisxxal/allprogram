#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("enter a data into an array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d",a[3][3]-b[3][3]);
        }
        printf("\n");
    }
}