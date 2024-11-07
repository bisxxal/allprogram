#include<iostream>
using namespace std;
class myclass{
    public:
    int a;
    void set(int x){
        a=x;
    }
    void display(myclass demo1,myclass demo2,myclass demo3){
        a=demo1.a+demo2.a+demo3.a;
    }
    void show (){
        cout<<a<<endl;
    }
};
int main( ){
myclass demo1,demo2,demo4,demo3;
demo1.set(1);
demo2.set(2);
demo3.set(3);

demo4 .display(demo1,demo2 ,demo3);
demo4.show();
demo1.show();
demo2.show();
demo3.show();
return 0;
}