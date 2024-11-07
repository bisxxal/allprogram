
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
void solve(Node *root, int k, int &count, vector<int> path)
{
    // base case
    if (root == NULL)
        return;

    path.push_back(root->data);
    // left call
    solve(root->left, k, count, path);
    // right call
    solve(root->right, k, count, path);

    // check if there's any k sum path that
    // terminates at this node
    // Traverse the entire path as
    // there can be negative elements too
    int sum = 0;
    int size = path.size();
    for (int i = size - 1; i >= 0; i--)
    {
        sum = sum + path[i];
        if (sum == k)
            count++;
    }
    // Remove the current element from the path
    path.pop_back();
}

int sumK(Node *root, int k)
{
    vector<int> path;
    int count = 0;
    solve(root, k, count, path);
    return count;
}

int main()
{

    Node *root = newNode(1);

    root->left = newNode(3);
    root->left->left = newNode(2);
    root->left->right = newNode(1);
    root->left->right->left = newNode(1);
    root->right = newNode(-1);
    root->right->left = newNode(4);
    root->right->left->left = newNode(1);
    root->right->left->right = newNode(2);
    root->right->right = newNode(5);
    root->right->right->right = newNode(2);

    int k = 5;
    cout << sumK(root, k);

    return 0;
}
