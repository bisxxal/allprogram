#include<iostream>
using namespace std;
class mycls{
	public:
		void myfun();
};
void mycls::myfun(){
	cout<<"hello world ";
	
}
int main(){
	mycls obj;
	obj.myfun();
}