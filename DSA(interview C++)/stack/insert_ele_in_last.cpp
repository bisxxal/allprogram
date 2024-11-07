
#include <bits/stdc++.h>
using namespace std;
void  solve(stack<int>& S, int N)
{  //base case
	if ( S.empty()){
        S.push(N);
        return;
    }
    int num = S.top();
    S.pop();
// RUCURSIVE CALL 
    solve(S,N);

    S.push(num);

 
}
stack<int> insertToBottom(stack<int> &S, int N){

    solve (S,N);

    return S;
}
//       ---------------------------------using loop -------------------------------------
// void insertToBottom(stack<int> S, int N)
// {
// 	stack<int> temp;

// 	// Iterate until S becomes empty
// 	while (!S.empty()) {

// 		// Push the top element of S
// 		// into the stack temp
// 		temp.push(S.top());

// 		// Pop the top element of S
// 		S.pop();
// 	}

// 	// Push N into the stack S
// 	S.push(N);

// 	// Iterate until temp becomes empty
// 	while (!temp.empty()) {

// 		// Push the top element of
// 		// temp into the stack S
// 		S.push(temp.top());

// 		// Pop the top element of temp
// 		temp.pop();
// 	}

// 	// Print the elements 
// 	while (!S.empty()) {
// 		cout << S.top() << " ";
// 		S.pop();
// 	}
// }

int main()
{
	// Input
	stack<int> S;
	S.push(5);
	S.push(4);
	S.push(3);
	S.push(2);
	S.push(1);

	int N = 7;

	insertToBottom(S, N);
 while (!S.empty()) {
        cout << S.top() << " ";
        S.pop();
    }
	return 0;
}
