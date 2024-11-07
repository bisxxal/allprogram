#include<bits/stdc++.h>
using namespace std;
class stduent{
    public:
    int roll;
    string name;

    void getdata(){
        cout<< "Enter roll "<<endl;
        cin>>roll;
        cout<< "Enter name "<<endl;
        cin>>name; 
    } 
    void putdata(){
        cout<< "  rool is : "<< roll << " name : "<< name;
    }
};

int main( ){
stduent obj;
fstream newfile;
newfile.open("eoffile",ios::out);
cout<< "created :"<<endl;
obj.getdata();
// obj.putdata();
newfile<<obj.roll<< obj.name;
newfile.close();

fstream file;
file.open("eoffile",ios::in);
if(!file.eof()){
    cout<<"printing :"<<endl;
    file>>obj.roll;
    file>>obj.name;
    cout<< obj.roll<<endl<< obj.name;
}
return 0;
}