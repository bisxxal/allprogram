
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

Node *newNode(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
 Node* lca(Node* root ,int n1 ,int n2 )
    {
       //base case
        if(root == NULL)
        {
            return NULL;
        }
        
        if(root->data == n1 || root->data == n2) 
        {
            return root;
        }
        
        Node* leftAns = lca(root->left, n1, n2);
        Node* rightAns = lca(root->right, n1, n2);
        
        if(leftAns != NULL && rightAns != NULL) 
        {
            return root;
        }
        else if(leftAns != NULL && rightAns == NULL)
            return leftAns;
        else if(leftAns == NULL && rightAns != NULL)
            return rightAns;
        else
            return NULL;
    }

int main()
{
   Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    cout << "LCA(4, 5) = " << lca(root, 4, 5)->data;
    cout << "\nLCA(4, 6) = " << lca(root, 4, 6)->data;
    cout << "\nLCA(3, 4) = " << lca(root, 3, 4)->data;
    cout << "\nLCA(2, 4) = " << lca(root, 2, 4)->data;
    return 0;
}
