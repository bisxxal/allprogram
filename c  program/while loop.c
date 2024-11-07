#include<stdio.h>
void main()
{
	int no,dg,rev=0;
	printf("%d",&no);
	while(no>0)
	{
		dg=no%10;
		rev=rev*10+dg;
		no=no/10;
	}
	printf("rev of a no=%d",rev);
}