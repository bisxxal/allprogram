#include<stdio.h>
int main()
{
    int a[3][3],i,j,trace=0;
    printf("enter a data into an array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
    if(i==j)
    trace=trace+a[i][j];
    }
    }
    printf("trace or matrix=%d",trace);
    return 0;
}