
/*template<class T1, class T2, ......>   
class class_name  
{  
   // Body of the class.  
}  */ 

#include<iostream>
using namespace std;
template <class T1,class T2>
class myclass{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 a,T2 b){
         data1=a;
       data2=b;
    }
    void display(){
         
        cout<<"data1="<<data1<<endl<<"data2="<<data2<<endl<<data1+data2;
    }

};
int main(){
myclass<int ,char>obj1(23,'f');
obj1.display();


return 0;
}