 #include <bits/stdc++.h>
using namespace std;
 
class node {
public:
	int data;
	node* left;
	node* right;
};
 
    pair<bool, int> isBalancedfast(node* root)
    {
        // base case: if root is null, the tree is balanced
        // and has height 0
        if (root == NULL) {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        // recursively call isBalancedfast function on left
        // and right subtrees
        pair<int, int> left = isBalancedfast(root->left);
        pair<int, int> right = isBalancedfast(root->right);
 
        // retrieve whether left and right subtrees are
        // balanced
        bool leftAns = left.first;
        bool rightAns = right.first;
 
        // check the difference in heights of left and right
        // subtrees
        bool diff = abs(left.second - right.second) <= 1;
 
        // create a pair to store the answer (whether the
        // tree is balanced) and its height
        pair<bool, int> ans;
        // set the height of the current node
        ans.second = max(left.second, right.second) + 1;
        // if both subtrees are balanced and their heights
        // differ by at most 1, the tree is balanced
        if (leftAns && rightAns && diff) {
            ans.first = true;
        }
        // otherwise, the tree is not balanced
        else {
            ans.first = false;
        }
        return ans;
    }
 
 
    // Function to check whether a binary tree is balanced
    // or not.
    bool isBalanced(node* root)
    {
        return isBalancedfast(root).first;
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
	root->right = newNode(3);
	root->right = newNode(3);  
	root->left->left = newNode(4);
	root->left->left->left  = newNode(4);
	root->left->left = newNode(4) ;
	root->left->left = newNode(4);
	root->left->right = newNode(5);
   if (isBalanced(root) > 0)
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
	return 0;
}
 
