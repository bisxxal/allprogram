#include<bits/stdc++.h>
using namespace std;
int main( ){

fstream file;
string ch;
file.open("myFile.txt" , ios::out);
getline(cin,ch);
file<<ch;
file.close();
cout<<"Output is"<<endl;
file.open("myFile.txt" , ios::in);
while(!file.eof()){

file>>ch;
cout<<ch<<endl;
}
file.close();
return 0;
}