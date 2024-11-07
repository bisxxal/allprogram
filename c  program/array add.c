#include<stdio.h>
void main()
{
	int a[100],i,n,sum;
	printf("enter the range\n");
	scanf("%d",&n);
    printf("enter the dat into an array\n");
	for(i=0;i<n;i++)                 //input

	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	for(i=0;i<n;i++)
	sum=sum+a[i];
	printf("sum=%d\n",sum);
}