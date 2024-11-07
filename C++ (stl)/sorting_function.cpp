#include <bits/stdc++.h>
using namespace std;
bool userdefgreater(string elem1, string elem2)  
{    return elem1 > elem2;    }  
  
int main()
{ 
// int a[20],i,n;
// cout<<"enter a number"<<endl;
// cin>>n;
// for(i=0;i<n;i++)
// cin>>a[i];

// sort(a,a+n);                        // sorting function inbilt

// for(i=0;i<n;i++)
// cout<<a[i]<<" ";

                             //using vector in swap
// vector<int >v={2,423,4,234,1234,1,31,31,3};

// for(auto &val: v)
// cout<<val<<" ";
// cout<<"\nAfter swap"<<endl;
// sort(v.begin(),v.end());
// for(auto &val2: v)
// cout<<val2<<" ";

vector<string >v ;
 v.push_back("Lisp");  
    v.push_back("C#");  
    v.push_back("Java");  
    v.push_back("Python");  
    v.push_back("C++");  
    v.push_back("Pascal");  
    v.push_back("Sql");  
for(auto &val: v)
cout<<val<<" ";
cout<<"\nAfter swap"<<endl;
sort(v.begin(),v.end(),userdefgreater);
for(auto &val2: v)
cout<<val2<<" ";
    return 0;
}