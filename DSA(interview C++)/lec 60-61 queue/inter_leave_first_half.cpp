
#include <bits/stdc++.h>
using namespace std;

void interleave(queue<int> &q)
{
	queue<int> q1, q2;

	int n = q.size();

	// Insert first half in q1
	for (int i = 0; i < n / 2; i++) {
		q1.push(q.front());
		q.pop();
	}

	// insert second half in q2
	for (int i = 0; i < n / 2; i++) {
		q2.push(q.front());
		q.pop();
	}
	
	// Insert elements of q1 and q2 back
	// to q in alternate order.
	for (int i = 0; i < n/2; i++) {
		q.push(q1.front());
		q1.pop();
		q.push(q2.front());
		q2.pop();
	}
}
 
int main()
{ 
	queue<int> q;
	   q.push(3);
    q.push(7);
    q.push(5);    
    q.push(6);
    q.push(8);
    q.push(9);
     
	interleave(q);

	// Printing queue elements
	int n = q.size();
	for (int i = 0; i < n; i++) {
		cout << q.front() << " ";
		q.pop();
	}
}
 