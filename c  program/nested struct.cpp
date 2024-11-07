#include<stdio.h>
#include<string.h>
struct address{
	char city[34];
	long pin ;
	int phone ;
};
struct employes{
	char name[30];
	struct address add;
};
void main()
{
	struct employes e;
	printf("enter employes name\t");
	scanf("%S",&e.name);
//strcpy(e.name,"bisxxal");
	printf("enter employes adrees\n ");
	printf("enter city\t");
//	scanf("%S",&e.add.city);
strcpy(e.add.city,"bhubanswer");
	printf("enter pin code\t");
	scanf("%ld",&e.add.pin);
	printf("enter phone number\t");
	scanf("%d",&e.add.phone);
	printf("printing employess adress\n ");
	printf("name %s\n adress of employess:\n city=%s\n pin=%ld\n phone=%d",e.name,e.add.city,e.add.pin,e.add.phone);
	
}