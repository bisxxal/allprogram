
#include <bits/stdc++.h>
using namespace std;
  
class twoStacks {
    int* arr;
    int size;
    int top1, top2;
  
public:
    // Constructor
    twoStacks(int n)
    {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = n ;
    }
    void push1(int num){
        if (top2-top1>1){
            top1++;
            arr[top1]=num;
        }
        else {
            cout<<" stack overflow"<<endl;
        }
    }
    void push2(int num){
         if (top2-top1>1){
            top2--;
            arr[top2]=num;
        }
        else {
            cout<<" stack overflow"<<endl;
        }
    }
    int pop1(){
        if (top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else 
        cout << "Stack UnderFlow";
    }
    int pop2(){
        if (top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else 
        cout << "Stack UnderFlow"<<endl;
    }
};
int main()
{
    twoStacks ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);
    cout << "Popped element from stack1 is "
         << ": " << ts.pop1() << endl;
    ts.push2(40);
    cout << "Popped element from stack2 is "
         << ": " << ts.pop2() << endl;
    return 0;
}