#include <iostream>
using namespace std;
class mycls
{
  int a, b,c;

public:
  void display(){
    a=87;
    cout << "a=" << a <<endl;
  }
};

class derived : public mycls{
int y ;
public:
void show ( ){
  y=89;
  cout << "y ="<< y<<endl;
}
};

int main()
{
derived obj ;
obj.display();
 obj.show();
  return 0;
}