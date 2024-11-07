#include<stdio.h>
void main () {
	FILE *fp;
	int length;
	fp = fopen ("file 1.txt","r");
	
	fseek(fp,0,SEEK_END);
	length=ftell(fp);
	fclose(fp);
	printf("size of file %d bytes",length);
}