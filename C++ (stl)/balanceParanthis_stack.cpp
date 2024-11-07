// #include<bits/stdc++.h>
// using namespace std;
// unorderd_map<char,int  >symbol={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3} };
// string show (string s){
//     stack<char >st;
//     for (auto bracket: s){
//         if (symbol[bracket]<0){
//             st.push(bracket);
//         }else{
//             if (st.empty())  /// for if stack is empty
//             return "stack is empty";
//             char top =st.top();
//             st.pop();
//             if (symbol[top]+symbol[bracket])
//             return "not balanced";

//         }
//     }
//     if (st.empty() )return "yes";
//     return "no";
// }
// int main( ){
// int t;
// cin>>t;
// for(int i=0;i<t;i++){
//     string s;
//     cin>>s;
//     cout<<"balanceed "<<show(s);
// }
// return 0;
// }



#include<iostream>
#include<stack> 
using namespace std; 
   
bool isBalanced(string expr) { 
    stack<char> s; 
    char ch; 
  
    for (int i=0; i<expr.length(); i++) { //for each character in the expression, check conditions 
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{') { //when it is opening bracket, push into stack
            s.push(expr[i]); 
            continue; 
        } 

        if (s.empty()) //stack cannot be empty as it is not opening bracket, there must be closing bracket
           return false; 
  
        switch (expr[i]){ 
        case ')': //for closing parenthesis, pop it and check for braces and square brackets
            ch = s.top(); 
            s.pop(); 
            if (ch=='{' || ch=='[') 
                return false; 
            break; 
  
        case '}': //for closing braces, pop it and check for parenthesis and square brackets
  
            ch = s.top(); 
            s.pop(); 
            if (ch=='(' || ch=='[') 
                return false; 
            break; 
  
        case ']': //for closing square bracket, pop it and check for braces and parenthesis
  
            ch = s.top(); 
            s.pop(); 
            if (ch =='(' || ch == '{') 
                return false; 
            break; 
        } 
    } 
    return (s.empty()); //when stack is empty, return true
} 
  
 
main() { 
    string expr = "[  ()   ]"; 
  
    if (isBalanced(expr)) 
        cout << "Balanced"; 
    else
        cout << "Not Balanced"; 
}