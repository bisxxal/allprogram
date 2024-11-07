#include<stdio.h>
void main()
{
	int i,n,a[50],no,k=0;
	printf("enter the range\n");
	scanf("%d",&n);
	printf("enter the data into an array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("enter the element to seach\n");
	scanf("%d",&no);
	for(i=0;i<n;i++)
	{
		if(a[i]==no)
		{
			k=5;
			break;
		}
	}
	if(k==5)
	printf("data is found");
	else
	printf("data is not found");
}