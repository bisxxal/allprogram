 
#include <bits/stdc++.h>
using namespace std;
 
class node {
public:
	int data;
	node* left;
	node* right;
};
 
node* newNode(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}

    bool isIdentical(node *r1, node *r2)
    {
        // base case
        if(r1 == NULL && r2 == NULL) {
            return true;
        }
        
        if(r1 == NULL && r2 != NULL) {
            return false;
        }
        
        if(r1 != NULL && r2 == NULL) {
            return false;
        }
        
        bool left = isIdentical(r1->left, r2->left);
        bool right = isIdentical(r1->right, r2->right);
        
        bool value = r1->data == r2->data;
        
        
        if(left && right && value) 
            return true;
        else
            return false;
        
        
    }
 
int main()
{
	node* root1 = newNode(1);
	node* root2 = newNode(1);
    
	root1->left = newNode(2);
	root1->right = newNode(3);
	root1->left->left = newNode(4);
	root1->left->right = newNode(5);

	root2->left = newNode(2);
	root2->right = newNode(3);
	root2->left->left = newNode(4);
	root2->left->right = newNode(5);

	// Function call
	if (isIdentical(root1, root2))
		cout << "Both trees are identical.";
	else
		cout << "Trees are not identical.";

	return 0;
}

// This code is contributed by rathbhupendra
