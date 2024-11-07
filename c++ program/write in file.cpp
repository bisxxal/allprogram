#include<iostream>
#include<fstream>
using namespace std;
int main(){

fstream filename;
char msg[50];
filename.open("skillfile.txt",ios::out);
cout<<"enter the message"<<endl;
cin>>msg;
filename<<msg<<endl;
filename.close();
cout<<"the output is ";
filename.open("skillfile.txt",ios::in);
filename>>msg;
cout<<msg<<endl;
filename.close();
return 0;
}
