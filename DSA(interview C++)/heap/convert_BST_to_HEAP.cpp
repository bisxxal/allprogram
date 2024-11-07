#include <bits/stdc++.h>
using namespace std;
 
class Node {
    public:
   int data;
   Node *left, *right;
};
//node creation
  Node* getNode(int data) {
     Node *newNode = new Node;
   newNode->data = data;
   newNode->left = newNode->right = NULL;
   return newNode;
}
//performing preorder traversal
void preorderTraversal(Node *root) {
   if (!root)
    return;
   cout << root->data << " ";
   preorderTraversal(root->left);
   preorderTraversal(root->right);
}
//storing values in sorted fashion
//with inorder traversal
void inorderTraversal(Node *root, vector<int>& arr) {
   if (root == NULL)
      return;
   inorderTraversal(root->left, arr);
   arr.push_back(root->data);
   inorderTraversal(root->right, arr);
}
//converting BST to min heap
void convert_BSPheap(Node *root, vector<int> arr, int i) {
   if (root == NULL)
      return;
   root->data = arr[++i];
   convert_BSPheap(root->left, arr, i);
   convert_BSPheap(root->right, arr, i);
}
//converting to min heap
void convert_minheap(Node *root) {
   //vector storing the values of nodes
   vector<int> arr;
   int i = -1;
   //moving via inorder traversal
   inorderTraversal(root, arr);
   convert_BSPheap(root, arr, i);
}
//performing preorder traversal
 
int main() {
     Node *root = getNode(4);
   root->left = getNode(2);
   root->right = getNode(6);
   root->left->left = getNode(1);
   root->left->right = getNode(3);
   root->right->left = getNode(5);
   root->right->right = getNode(7);
   convert_minheap(root);
   cout << "Preorder Traversal:" << endl;
   preorderTraversal(root);
   return 0;
}