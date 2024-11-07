#include<stdio.h>
int main()
{
    char a[500];
    int i,word;
   // printf("enter a name");
 //   gets(a);
    i=0;
    word=1;
    printf("enter a name\n");
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]==' ')
        word++;
        i++;
    }
    printf(" \n no of words=%d",word);
//    return 0;
}