#include<stdio.h>
void main()
{
	int l=0,i,n,a[100];
	printf("enetr the no of elemrnt");
	scanf("%d",&n);
	printf("enter the numbers);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(l<a[i])
		l=a[i];
		
	}
	printf("the largest number is=%d",l);
}