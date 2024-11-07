#include<iostream>
#include<fstream>
using namespace std;
class student{
	int roll,i;
	int mark [79];
	public:
		void getdata();
		void putdata();
};
void student::getdata(){
	cout<<"enter the roll no"<<endl;
	cin>>roll;
	for(i=0;i<5;i++){
	
	cout<<"eneter the student data"<<(i+1)<<endl;
	cin>>mark[i];
}
}
void student::putdata(){
	int total =0;
	for(int i=0;i<5;i++)
	{
		total=total+mark[i];
	}
	cout<<"total marks is :"<<total;
}
int main(){
	student obj;
	obj.getdata();
	obj.putdata();
	return 0;
}