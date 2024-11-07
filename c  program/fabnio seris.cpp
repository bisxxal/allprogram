#include<stdio.h>
void main()
{
	int n,n1=0,n2=1,n3,i;
	printf("enter number of element");
	scanf("%d",&n);
	printf("\n%d%d",n1,n2);
	for(i=3;i<=n;i++)
	{
		n3=n1+n2;
		printf("\t%d",n3);
		n1=n2;
		n2=n3;
		
	}
}