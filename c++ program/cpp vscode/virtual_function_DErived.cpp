#include <iostream>
using namespace std;
class A
{
public:
      void fun()
    {
        cout << " A is called" << endl;
    }
};
class B : public A
{
public:
    void fun()
    {
        cout << " b is called" << endl;
    }
};
class C : public B
{
public:
    virtual void fun()
    {
        cout << " c is called" << endl;
    }
};
int main()
{
    C obj;
    obj.fun();

    B *obj2 = &obj;
    obj2->fun();

     A*obj3 = &obj;
      obj3->fun();
    return 0;
}