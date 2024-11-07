#include<bits/stdc++.h>
using namespace std;
class myclass{
    int a;
    public:
    void getdata(){
            cout<< "Enter A value :"<<endl;
            cin>>a;
    }
    // void show(){
    //     cout<< " "
    // }
    myclass operator ==(myclass temp){
        if (a==temp.a)
        cout<< " OBJECTS ARE SAME ";
        else
        cout<< " OBJECTS ARE DIFFRENT";
        
    }
};
int main( ){
myclass obj1,obj2;
obj1.getdata();
obj2.getdata();

obj1==obj2;
return 0;
}