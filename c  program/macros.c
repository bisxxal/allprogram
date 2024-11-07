#include<stdio.h>
int main()
{
printf("file%s\n",__FILE__);
printf("DATE%s\n",__DATE__);
printf("TIME%s\n",__TIME__);
printf("line%d\n",__LINE__);
printf("stdc%d\n",__STDC__);
}