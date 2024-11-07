#include<stdio.h>
void main()
{
    int no,fact=1;
    printf("enter a no");
    scanf("%d",&no);
    while(no>0)
    {
        fact=fact*no;
        no=no-1;
    }
    printf("factrroil=%d",fact);
}