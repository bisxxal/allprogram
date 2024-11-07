#include<iostream>
using namespace std;
class myclass{
        int a;
        public:
        void putdata(){
            cout<<"enter a no";
            cin>>a;
        }
        void sum(myclass obj1,myclass obj2){
            a=obj1.a+obj2.a;
        }
       void  getdata(){
        cout<<"value of a is "<<a<<endl;
       }
};
int main(){
myclass obj1,obj2,obj3;
obj1.putdata();
obj2.putdata();
obj3.sum(obj1,obj2);
obj3.getdata();
return 0;
}