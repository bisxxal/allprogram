#include<bits/stdc++.h>
using namespace std;
class base {
    int a;
    public:
    void show (int a){
       this-> a=a;

    }
    void display(){
        cout<< "A is  "<<a ;
    }
};
int main( ){
base obj;
obj.show(56);
obj.display();
return 0;
}