#include <bits/stdc++.h>
using namespace std;
void sortedInsert(stack<int> &stack, int num) {
    //base case
    if(stack.empty() || (!stack.empty() && stack.top() < num) ) {
        stack.push(num);
        return;
    }
    
    int n = stack.top();
    stack.pop();
    
    //recusrive call
    sortedInsert(stack, num);
    
    stack.push(n);
}
void sortStack(stack<int>& st)
{

	if (st.empty()) 
		return;

		int num = st.top();
		st.pop();
        //recursive call

		sortStack(st);
 
	sortedInsert(st,num);
 
}
 
int main()
{
	stack<int> st, st2;
    st2.push(7);
    st2.push(-4);
    st2.push(4);
    st2.push(7);
    st2.push(-9);

	// sortStack(st2);
   sortStack(st2);
	while (!st2.empty()) {
		cout << st2.top() << " ";
		st2.pop();
	}
	return 0;
}
