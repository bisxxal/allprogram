#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *insert(Node *root, int data)
{

    if (root == NULL)
        return new Node(data);

    if (data > root->data)
        root->right = insert(root->right, data);

    if (data < root->data)
        root->left = insert(root->left, data);

    return root;
}
Node *inorder(Node *root)
{
    if (root == NULL)
        return NULL;

    root->left = inorder(root->left);
    cout << root->data << " ";
    root->right = inorder(root->right);
}

bool search(Node *root, int key)
{

    //     if ( root == NULL)
    //     return NULL;

    //     if (root->data == key)
    //     return root;

    //   if (root->data < key)
    //     return search(root->right, key);

    //     return search(root->left, key);

    while (root != NULL)
    {
        if (key > root->data)
            root = root->right;

        if (key < root->data)
            root = root->left;
        else
            return true;
    }
    return false;
}

Node *minvalue(Node *root)
{

    Node *temp = root;

    while (temp->left != NULL)
    {

        temp = temp->left;
    }
    return temp;
}

Node *Maxvalue(Node *root)
{

    Node *temp = root;

    while (temp->right != NULL)
    {

        temp = temp->right;
    }
    return temp;
}
Node *deletebst(Node *root, int val)
{

    if (root == NULL)
        return NULL;

    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child

        // left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // right child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // 2 child

        if(root->left != NULL && root->right != NULL)
        {
            int mini = minvalue(root->right)->data;
            root->data = mini;

            root ->right = deletebst(root->right , mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deletebst(root->left, val);
        return root;
    }
    else
    {
        root->right = deletebst(root->right, val);
        return root;
    }
}
int main()
{

    Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    int key = 6;
    inorder(root);

    // Searching in a BST
    if (search(root, key))
        cout << endl
             << key << "   found" << endl;
    else
        cout << endl
             << key << " NOt found" << endl;

    cout << " Min value is : " << minvalue(root)->data << endl;
    cout << " NAX value is : " << Maxvalue(root)->data << endl;
int val =  60;
    deletebst(root, val);
        inorder(root);
    return 0;
}