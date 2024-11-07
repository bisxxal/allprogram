/*#include<stdio.h>
void main()
{
	int no,dg,rev=0;
	printf("enter a no");
	scanf("%d",&no);
	while(no>0)
	{
		dg=no%10;
		rev=rev*10+dg;
		no=no/10;
	}
	printf("rev of a no=%d",rev);
}*/

#include<stdio.h>
void main()
{
	int no,sum;
	printf("enter the no");
	scanf("%d",&no);
	while(no>0)
	{
		sum=sum+no;
		no=no/10;
		printf("%d",sum);
		//no=no/10;
	}
}