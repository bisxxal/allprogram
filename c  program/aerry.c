#include<stdio.h>
struct student{
	int roll;
	char name[100];

}; 
int main()
{
	struct student s[2];
	int i;
	for(i=0;i<2;i++){
		printf("enter rool");
		scanf("%d",&s[i].roll);
		printf("enter name \n");
		scanf("%s",&s[i].name);
	}

for(i=0;i<2;i++){
	printf("\n roll is %d\n",s[i].roll);
	printf(" name is %s\n",&s[i].name);
}
	return 0;
}