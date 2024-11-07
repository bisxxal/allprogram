#include <iostream>
using namespace std;

class base
{
  int a, b;

public:
  base()
  {
    a = 12;
    b = 34;
  }
  friend class derived;
};
class derived
{
  int d = 23;

public:
  void fun(base O)
  {
    cout << "A : " << O.a << endl;
    cout << "B : " << O.b << endl;
    cout << "D : " << d << endl;
  }
};
int main()
{
  base obj;
  derived obj2;
  obj2.fun(obj);
  return 0;
}