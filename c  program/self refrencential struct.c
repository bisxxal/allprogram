#include<stdio.h>
#include<string.h>
struct code{
	int i;
	char c;
	struct code *ptr;
};
void main ()
{
	struct code v1;
	struct code v2;
	v1.i=34;
	v1.c='a';
	v1.ptr=NULL;
	
	v2.i=56;
	v2.c='b';
	v2.ptr=NULL;
	
	v1.ptr=&v2;
	printf("%d %c",v1.ptr->i,v1.ptr->c);
}