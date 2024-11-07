#include <iostream>
using namespace std;
class myclass
{
    int x;

public:
    
    static int y;
    static void display()
    {
       cout<<"i am in staic member function y="<< y  + 6;
    } 

      void show()
    {
        x = 34;
       cout<<"x="<< x <<endl;
       cout<<"y="<< y  + 100<<endl;
    }
};
int myclass ::y=100;
int main()
{
    myclass   obj;
    // cout << myclass ::y<<endl;
    obj.show();
    // myclass::display();
   obj.display();
    return 0;
}