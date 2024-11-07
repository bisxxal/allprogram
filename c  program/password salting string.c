#include<stdio.h>
#include<string.h>

void salting(char password[])
{
	char salt []="1234";
	char newpass[200];
	
	strcpy(newpass,password);
	strcat(newpass,salt);
}
void main()
{
	char password[100];  //new pass =test
	scanf("%s",&password);  //new pass =test +1234
    salting(password);
}

