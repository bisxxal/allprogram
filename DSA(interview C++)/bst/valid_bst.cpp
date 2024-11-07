#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

bool isBST(node *root, int min, int max)
{
    if (root == NULL)
        return true;

    if (root->data >= min && root->data <= max)
    {

        bool left = isBST(root->left, min, root->data);
        bool rigt = isBST(root->right, root->data, max);
        return left && right;
    }
    else
        return false;
}

int validbst(node *root)
{
    return (isBST(root, INT_MIN, INT_MAX));
}
int main()
{
    node *root = new node(40);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);

    // Function call
    if (validbst(root) == true)
        cout << "Is BST";
    else
        cout << "Not a BST";

    return 0;
}

// This code is contributed by rathbhupendra
