#include<stdio.h>
void main()
{
	int i,po,n,a[50],no;
	printf("enter the range ");
	scanf("%d",&n);
	printf("enter the data into an array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("enter the postion");
	scanf("%d",&po);
	for(i=po;i<n-1;i++)
	a[i]=a[i+1];
	
	n--;
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
}