#include<stdio.h>
int main()
{
	int a[50],i,n,po,no;
	printf("enter the range");
	scanf("%d",&n);
	printf("enter the elemnents");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the new number");
	scanf("%d",&no);
	printf("enter the position of the number ");
	scanf("%d",&po);
	for(i=n-1;i>po-1;i--)
	a[i+1]=a[i];
	a[po-1]=no;
	n++;
	for(i=0;i<n;i++)
	printf("%d",a[i]);
    return 0;
}