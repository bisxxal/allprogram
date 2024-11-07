
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

void printLeftBoundary(Node *root)
{

    if ((root == NULL) || (root->left == NULL && root->right == NULL))
        return;

    cout << root->data << " ";
    if (root->left)
        printLeftBoundary(root->left);
    else
        printLeftBoundary(root->right);
}
void printRightBoundary(Node *root)
{
    if ((root == NULL) || (root->left == NULL && root->right == NULL))
        return;

    if (root->right)
        printRightBoundary(root->right);
    else
        printRightBoundary(root->left);

    cout << root->data << " ";
}

void printLeaves(Node *root)
{
    if (root == NULL)
        return;

    printLeaves(root->left);
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << " ";
        return;
    }

    printLeaves(root->right);
}

void printBoundary(Node *root)
{
     if(root == NULL)
    return;
    
    cout << root->data << " ";
    printLeftBoundary(root->left);
    printLeaves(root->left);
    printLeaves(root->right);
    printRightBoundary(root->right);
}

int main()
{
    // Creating the binary tree
    Node *root = newNode(20);
    root->left = newNode(8);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
    root->right = newNode(22);
    root->right->right = newNode(25);

    printBoundary(root);

    return 0;
}
// 20 8 4 10 14 25 22
