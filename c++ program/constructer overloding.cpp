#include<iostream>
using namespace std;
class myclass{
    int a;
    public:
    myclass()  ///defult const
    {
        a=10;
    }
    myclass(int x){
        a=x;
        a=45;
    }
void putdata(){
    cout<<"A="<<a<<endl;
}
};
int main(){
    myclass obj;
//    obj.putdata();
    myclass obj1(34);
    obj1.putdata();
    return 0;
}