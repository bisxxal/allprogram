#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};  
    vector<int> v2={6,7,8,9,10};  
cout<<"befor swaping "<<endl;
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";

    for(int i=0;i<v2.size();i++)
cout<<v2[i]<<" ";
cout<<"after swaping "<<endl;
v.swap(v2);
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";

    for(int i=0;i<v2.size();i++)
cout<<v2[i]<<" ";
    return 0;
}