#include<iostream>
using namespace std;
class myclass{
    int a,b;
    public:
   
    myclass(int x,int y=13){
        a=x;
        b=y;
    }
void putdata(){
    cout<<"A="<<a<<endl<<"b="<<b;
}
};
int main(){
    myclass obj(5);
    obj.putdata();
    
    return 0;
}