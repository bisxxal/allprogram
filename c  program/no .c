

#include<stdio.h>
void eo(int);
void eo(int no)
{
	int eo;
	(no%2==0)?printf("even"):printf("odd");
}
	void main()
{
	int no;
	printf("enter a no");
	scanf("%d",&no);
	eo("no");
}

