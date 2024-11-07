#include<stdio.h>
#include<string.h>
struct student {
	int roll ;
	char name[30];
	
};
void main (){
	struct student s[4];
	int i;
	printf("enter recod of s student");
	for(i=0;i<4;i++)
	{
		printf("enter roll no");
		scanf("%d",&s[i].roll);
		printf("enter  name");
		scanf("%d",&s[i].name);
	}
	printf("student information list \n");
	for(i=0;i<4;i++)
	{
		printf("roll no %d\n name=%s",s[i].roll,s[i].name);
	}
}