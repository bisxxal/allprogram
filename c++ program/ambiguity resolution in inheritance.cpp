#include<iostream>
using namespace std;
// Base class A
class A {
    public:
 
    void func() {
        cout << " I am in class A" << endl;
    }
};
class B {
    public:
 
    void func() {
        cout << " I am in class B" << endl;
    }
};
class C: public A, public B {
};
int main() {
    // Created an object of class C
    C obj;
    // Calling function func() in class A
    obj.A::func();
    // Calling function func() in class B
    obj.B::func();
    return 0;
}