#include<stdio.h>
#include<string.h>
struct student {
	int roll;
	char name[20];
};
void func(struct student s);
void main()
{
struct student s;
s.roll=12;
//s.name="bisxxal";
//strcpy(s.name,"bisxxal");
func (s);
}