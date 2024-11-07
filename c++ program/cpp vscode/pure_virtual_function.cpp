#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    int a=45;
   virtual void show ()=0;
};
class derived: public base{
    
    public:
    // a=90;
    void show ( ) {
        cout<< "A is "<<  a;
    }
};
int main( ){
derived obj;
obj.show();
return 0;
}