#include<bits/stdc++.h>
using namespace std;

void newstack(stack <int> sk)  
{  
    stack <int> sg = sk;  
    while (!sg.empty())  
    {  
        cout << '\t' << sg.top();  
        sg.pop();  
    }  
    cout << '\n';  
}  
int main( ){

stack<int >s;        // we can use int as well as a string ex->    stack<string >str;
s.push(23);
s.push(34);
s.push(67);
s.push(89);

// while(!s.empty()){
//     cout<<s.top()<<endl;
//     s.pop();
// }
newstack(s)  ;
cout<<"POped elelment is "<<s.top()<<endl;
 cout << "\n newst.top() : " << s.top();
   cout << "\n newst.size() : " <<s.size()<<endl; 
    s.pop();
      s .emplace (43);  // insret element in stack
       newstack(s)  ;
return 0;
}