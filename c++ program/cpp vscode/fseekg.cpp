#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string str;
fstream file(" copy.txt",ios::out|ios::in);
file.seekg(0,ios::beg);
file.seekg(2,ios::beg);
file.seekg(0,ios::end);
file.seekg(-20,ios::end);
file.seekg(1,ios::cur);
file<<"hi";
file.seekg(0,ios::beg);
getline(file, str);
cout<<str;
return 0;
}
