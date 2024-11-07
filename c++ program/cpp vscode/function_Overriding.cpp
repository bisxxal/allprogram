#include<bits/stdc++.h>
using namespace std;
class A{
    public: 
    A(){
        cout<<"i am in base class \n";
    }
    };

    class B {
    public: 
    B(){
        cout<<"i am in deerived class \n";
    }
    };
  class C:public  B, public virtual A{
    public: 
   C(){
        cout<<"i am in 2nd deerived class ";
    }
    };
int main( ){
       C obj ;
    //    obj.display();
    //    obj2.A::display();
return 0;
}