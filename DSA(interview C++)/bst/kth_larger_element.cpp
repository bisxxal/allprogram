#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

  
Node* KthLargestUsingMorrisTraversal(Node* root, int k)
{
    Node* curr = root;
    Node* Klargest = NULL;
 
    // count variable to keep count of visited Nodes
    int count = 0;
 
    while (curr != NULL) {
        // if right child is NULL
        if (curr->right == NULL) {
 
            // first increment count and check if count = k
            if (++count == k)
                Klargest = curr;
 
            // otherwise move to the left child
            curr = curr->left;
        }
 
        else {
 
            // find inorder successor of current Node
            Node* succ = curr->right;
 
            while (succ->left != NULL && succ->left != curr)
                succ = succ->left;
 
            if (succ->left == NULL) {
 
                // set left child of successor to the
                // current Node
                succ->left = curr;
 
                // move current to its right
                curr = curr->right;
            }
 
            // restoring the tree back to original binary
            //  search tree removing threaded links
            else {
 
                succ->left = NULL;
 
                if (++count == k)
                    Klargest = curr;
 
                // move current to its left child
                curr = curr->left;
            }
        }
    }
 
    return Klargest;
}
int main()
{
   /* Constructed binary tree is
          4
        /   \
       2     7
     /  \   /  \
    1    3  6    10 */


    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(10);
 
    cout << "Finding K-th largest Node in BST : "
         << KthLargestUsingMorrisTraversal(root, 2)->data;
    return 0;
}

// This code is contributed by rathbhupendra
