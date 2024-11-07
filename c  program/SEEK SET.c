#include<stdio.h>
void main () {
	FILE *fp;
	fp = fopen ("file 1.txt","w++");
	fputs("this is hello world",fp);
	fseek(fp,7,SEEK_SET);
	fputs("c programming language",fp);
	fclose(fp);
}