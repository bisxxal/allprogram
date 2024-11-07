#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("enter the element into an array");
    for(i=0;i<3;i++)
    {
        for(i=0;i<3;i++)
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
            printf("%d",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
    return 0;
}