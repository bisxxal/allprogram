
#include <iostream>
using namespace std;
int fun(int n)
{
  int result;
  if (n == 1)
    return 0;
  if (n == 2)
    return 1;
 
  return fun(n - 1)+ fun(n - 2);

 
}
int main()
{
  int fact = 5;
  cout << fun(fact);
  return 0;
}