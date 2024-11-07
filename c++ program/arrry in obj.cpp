#include<iostream>
#include<fstream>
using namespace std;
class book{
	char name[70];
	float price;
	public:
		void getdata(){
			cout<<"enter the book name"<<endl;
			cin>>name;
			cout<<"enter the price"<<endl;
			cin>>price;
		}
		void putdata(){
			cout<<"thr title is :"<<name<<endl;
			cout<<"thr price is :"<<price<<endl;
		}
};
int main(){
	book bk[3];
	for(int i=0;i<3;i++){
	
	cout<<"enter the details of book "<<(i+1)<<endl;
	bk[i].getdata();
}
	for(int i=0;i<3;i++){
	
	cout<<" the details of book "<<(i+1)<<endl;
	bk[i].putdata();
}
}