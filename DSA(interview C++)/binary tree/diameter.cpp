 #include <bits/stdc++.h>
using namespace std;
 
class node {
public:
	int data;
	node* left;
	node* right;
};
 
int height(node* root)
{   // base case
	if (root == NULL) 
		return 0;
	 
		int rleft = height(root->left);
		int rright = height(root->right);

		int ans= max (rleft, rright)+1;
	 
    return ans;
} 

//===================================================== O(n*n) SOLUTION ===================================================
// int diameter(  node* root)
// {
//     // base case  
//     if (root == NULL)
//         return 0;
 
//     int op1 = diameter(root->left);
//     int op2 = diameter(root->right);
//     int op3 = height(root->left) + height(root->right)+1;
 
//   int ans = max(op1 , max( op2, op3));

//   return ans;
// }
 //===================================================== O(n) SOLUTION ===================================================

 
 
int diameterOpt(  node* root, int &height)
{
    // lh --> Height of left subtree
    // rh --> Height of right subtree
    int lh = 0, rh = 0;
 
    // ldiameter  --> diameter of left subtree
    // rdiameter  --> Diameter of right subtree
    int ldiameter = 0, rdiameter = 0;
 
    if (root == NULL) {
        height = 0;
        return 0; // diameter is also 0
    }
 
    // Get the heights of left and right subtrees in lh and
    // rh And store the returned values in ldiameter and
    // ldiameter
    ldiameter = diameterOpt(root->left, lh);
    rdiameter = diameterOpt(root->right, rh);
 
    // Height of current node is max of heights of left and
    // right subtrees plus 1
    height = max(lh, rh) + 1;
 
    return max(height +1, max(ldiameter, rdiameter));
    // return max(lh + rh + 1, max(ldiameter, rdiameter));
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

//   cout << "Diameter of the given binary tree is "
//          << diameter(root);

    int height = 0;
   cout << "Diameter of the given binary tree is "
         << diameterOpt(root, height);
 
	return 0;
}
 
