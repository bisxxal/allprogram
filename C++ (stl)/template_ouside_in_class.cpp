#include<iostream>
using namespace std;
template<class T>
class myclass{
        
        public:
       T data;
        myclass(T a){
            data=a;

        }
        void display();
};
template<class T>
void myclass<T>:: display(){
            cout<<data<<endl;
        }
int main(){
    myclass <int > obj(56);
    myclass <char> obj1('f');
    obj.display();
    obj1.display();
//    cout<< obj.data;
return 0;
}