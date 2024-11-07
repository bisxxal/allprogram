#include<iostream>
using namespace std;
class mybisx{                 //mybisx is a class name
	public:                        //acces specifier
		void mymtd(){                    //mehod fun iside in the class
		
		cout<<"hello world";
		}
};

int main()
{
	mybisx bis;                                    //crat an obj of my classs
	bis.mymtd();
}