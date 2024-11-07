#include<stdio.h>
int main()
{
	int age,salery;
	char name[50];
	printf (" enter name:\n");
	gets(name);
//	puts(name);
	printf("enter the age\n");
	scanf("%d",&age);
	printf("enter the salary");
	scanf("%d",&salery);
	if(salery>=10000)
	{
		printf("DA=%d\n",salery*12/100);
		printf("hra=%d\n",salery*18/100);
		printf("pf=%d\n",salery*16/100);
	}
	else if(salery<10000&&salery>=5000)
	{
		printf("ta=%d\n",salery*12/100);
		printf("da=%d\n",salery*20/100);
		printf("hra=%d\n",salery*15/100);
		printf("pf=%d\n",salery*14/100);
	}
	else if(salery<5000)
	{
		printf("da is 500\n");
		printf("pf is 200\n");
		printf("hra is 300\n");
	}
	else
	{
		printf("no data");
	}
	return 0;
}