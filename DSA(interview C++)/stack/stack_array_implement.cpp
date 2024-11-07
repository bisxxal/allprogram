#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int top, size, *arr;

    // constractr
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
            cout << "Stack is overflow"<<endl;
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
            cout << "Stack underflow " << endl;
    }
    int peek()
    {
        if(top>=0)
        return arr[top];

        else {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool isempty()
    {
        if(top==-1){
            return true ;
        }
        else 
        return false;
    }
    void print (){
        if (top==-1){
            cout<< "stack is empty"<<endl;
        }
        else {
            for (int i=0;i<=top;i++){
                cout<< arr[i]<<" "<<endl;
            }cout<< endl;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
st.print();
    // cout<<st.peek();
    st.pop();
st.print();

if (st.isempty())
cout<< "stack is empty "<<endl;

else 
cout<< " stack is NOt empty "<<endl;

    return 0;
}