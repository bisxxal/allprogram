 #include <bits/stdc++.h>
using namespace std;
 
class node {
public:
	int data;
	node* left;
	node* right;
};
 
int maxDepth(node* root)
{   // base case
	if (root == NULL) 
		return 0;
	 
		int rleft = maxDepth(root->left);
		int rright = maxDepth(root->right);

		int ans= max (rleft, rright)+1;
	 
    return ans;
}
 
node* newNode(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}
 
int main()
{
	node* root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout << "Height of tree is " << maxDepth(root);
	return 0;
}
 
