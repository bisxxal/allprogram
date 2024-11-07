#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[10],n,i;
printf("enter the num");
scanf("%d",&n);
for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
printf("\n binary is=");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
}

