#include <bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int>& st, int x)
{
	if (st.empty()) {
		st.push(x);
	}
	else {

		int num = st.top();
		st.pop();
		insert_at_bottom(st, x);
 
		st.push(num);
	}
}

void reverse(stack<int>& st)
{

	if (st.empty()) 
		return ;


int num = st.top();

		st.pop();
        // recursive call 
		reverse(st);

		insert_at_bottom(st,num);
 
}

int main()
{
	stack<int> st, st2;

	for (int i = 1; i <= 4; i++) {
		st.push(i);
	}

	st2 = st;

	cout << "Original Stack" << endl;
 
	while (!st2.empty()) {
		cout << st2.top() << " ";
		st2.pop();
	}
	cout<<endl;

 
	reverse(st);
	cout << "Reversed Stack" << endl;
 
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}
