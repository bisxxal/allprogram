#include<bits/stdc++.h>
using namespace std;
class MyStack {
   int mini;
   stack<int >s;
public :
int  push (int data){
    if(s.empty()){
        s.push(data);
        mini=data;
 
        return mini;
    }
    else{
        if (data<mini){
            int val=2*data-mini;
            s.push(val);
            mini=data;
 
return mini;
        }
    }
}
int pop(){
    if(s.empty())
    return -1;

    int curr=s.top();
    s.pop();

    if (curr>mini)
        return curr;

        else {
            int prevmini=mini;
            int val= 2*mini-curr;
            mini =val;
            return prevmini;
        }
}
int peek(){
    if(s.empty())
    return -1;

    int curr = s.top();
    if ( curr < mini){
        return mini;
    }
    else {
        return curr;
    } 
}

bool empty(){
    return s.empty();
}
int getMin(){
     if(s.empty())
    return -1;

    return mini;
}
};
int main( ){
 MyStack s;
   
      // Function calls
  cout<<  s.push(3)<< endl;
  cout<<  s.push(5)<< endl;
  cout<<  s.getMin()<< endl;
  cout<<  s.push(2)<< endl;
  cout<<  s.push(1)<< endl;
  cout<<  s.getMin()<< endl;
  cout<<  s.pop()<< endl;
  cout<<  s.getMin()<< endl;
 cout<<   s.pop()<< endl;
  cout<<  s.peek()<< endl;
return 0;
}