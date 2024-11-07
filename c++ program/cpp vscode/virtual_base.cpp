#include<bits/stdc++.h>
using namespace std;
class A{
public:
void display(){
   double a= 72342424;
    cout<< a*a*a ;
}
};
class B: public virtual A{

};
class C:public virtual A{

};
class D :public B,public C{

};
int main( ){
D obj;
obj.display();
return 0;
}