#include<iostream>
using namespace std;
template <class T1=int ,class T2= char , class T3=float >
class myclass{
    public:
    T1 data1;
    T2 data2;
    T3 data3;
    myclass(T1 a,T2 b, T3 c){
         data1=a;
       data2=b;
       data3=c;
    }
    void display(){
         
        cout<<"data1="<<data1<<endl<<"data2="<<data2<<endl<<"data3="<<data3;//<<data1+data2;
    }

};
int main(){
myclass< >obj1(23,'f',45.56);
obj1.display();
cout<<endl<<endl;
myclass<float,int ,char >obj2(23.34,56,'l');
obj2.display();

return 0;
}