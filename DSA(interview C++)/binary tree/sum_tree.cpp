 
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
 pair<bool,int> isSumTreeFast(node* root) {
        if (root== NULL )
        {
             pair<bool,int> p;
             return p = make_pair(true, 0);
        }
    if ( root->left && root->right == NULL){

        pair<bool,int> p;
             return p = make_pair(true, root->data);
    }
     pair<bool,int> leftAns  = isSumTreeFast(root->left);
     pair<bool,int> rightAns  = isSumTreeFast(root->right);

      bool isLeftSumTree = leftAns.first;
        bool isRightSumTree = rightAns.first;

    int leftsum = leftAns.second;
    int rightsum = rightAns.second;

    bool condn = leftsum+rightsum == root->data;

    pair<bool , int >ans;
    if (leftsum && rightsum && condn){

        ans.first = true;
        ans.second = root->data + leftsum + rightsum ;
    }
    else
    ans.first = false;

return ans;
 }
bool isSumTree(node *root ){
         
        return isSumTreeFast(root).first;

}
int main()
{
	node* root1 = newNode(14);

    
	root1->left = newNode(2);
	root1->right = newNode(3);
	root1->left->left = newNode(4);
	root1->left->right = newNode(5);

	 

	// Function call
	if (isSumTree(root1))
		cout << "  trees are sum equal.";
	else
		cout << "Trees are not  .";

	return 0;
}

// This code is contributed by rathbhupendra
