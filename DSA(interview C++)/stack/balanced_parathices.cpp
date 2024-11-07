#include<bits/stdc++.h>
using namespace std;
bool areBracketsBalanced(string exp){
    stack<char >s;

    for(int i=0;i<exp.length();i++){
        char ch=exp[i];

        // if opening bracket , stack push 
        if ( ch=='('|| ch=='{' ||ch=='[')
        s.push(ch);

        else {
            // for closing bracket
            if ( !s.empty()){
                char top=s.top();
                if ((ch=')'&& top=='(' )||
                ((ch='}'&& top=='{' ))||
                ( (ch='['&& top==']' )))
                s.pop();
            }
            else  
                return false ;
        }
    }
    if (s.empty())
    return true ;
    else 
    return false; 
}
int main( ){
  string expr = "{([({})])}";
    if (areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}