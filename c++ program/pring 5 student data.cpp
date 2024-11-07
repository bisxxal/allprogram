//name and roll and mark of a student and display it 
#include<iostream>
using namespace std;
class student{
	int roll;
	float mark;
	char name[70];
	public:
		void getdata(){
			cout<<"enter the name"<<endl;
			cin>>name;
			cout<<"enter the roll no\n";
			cin>>roll;
			cout<<"enter the mark\n";
			cin>>mark;
		}
		void putdata(){
			
//			cout<<"printing the data\n";
			cout<<"nmae is "<<name<<endl;
			cout<<"roll is"<<roll<<endl;
			cout<<"mark is"<<mark<<endl;
		}
};
int main(){

		student s[3];
		for(int i=0;i<3;i++){
//		cout<<"printing the data\n"<<(i+1);
		s[i].getdata();
	}
	
		for(int i=0;i<3;i++){
		cout<<"printing the data "<<(i+1)<<endl;
		s[i].putdata();
	}
	return 0;
}