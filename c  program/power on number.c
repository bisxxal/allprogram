#include<stdio.h>
#include<math.h>
void main()
{
	int n,s=1,i,p;
	printf("enter number");
	scanf("%d",&n);
	printf("enter power");
	scanf("%d",&p);
	for(i=0;i<n;i++)
	{
		s=pow ((double)n,p);
	}
	printf("%d",s);
	
}