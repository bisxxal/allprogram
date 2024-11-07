#include<iostream>
#include<fstream>
using namespace std;
class student{
	public:
		int roll;
		char name[20];
	public:
			void getdata(){
				cout<<"Rool";
				cin>>roll;
				cout<<"Name";
				cin>>name;
			}
		void putdata(){
				cout<<"name"<<name<<endl<<"rool"<<roll<<endl;
			}
};
int main(){
student stud;

fstream file;
char msg[50];
file.open("skillfile.txt",ios::out);
cout<<"enter student deletils"<<endl;
stud.getdata();
stud.putdata();
file<<"name"<<stud.name<<"Roll"<<stud.roll<<endl;
file.close();
fstream readfile;
readfile.open("skillfile.txt",ios::in);
if(!readfile.eof())
{
	readfile<<stud.name;
	readfile<<stud.roll;
	cout<<stud.name<<stud.roll;
}
readfile.close();
return 0;
}
