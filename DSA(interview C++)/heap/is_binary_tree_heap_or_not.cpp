#include<bits/stdc++.h>
using namespace std;
class Node {
 public:
    int data;
      Node* left;
      Node* right; 

};
 Node* newNode(int k)
{
      Node* node = new Node;
    node->data = k;
    node->right = node->left = NULL;
    return node;
}
  int countNodes(struct Node* root)
{
    if (root == NULL)
        return (0);
    return (1 + countNodes(root->left)  + countNodes(root->right));
          
}
 
 bool isCBT(  Node* root,   int index,  int count)
{ 
    if (root == NULL)
        return (true);
  
    if (index >= count)
        return (false);
 
    // Recur for left and right subtrees
    return (isCBT(root->left, 2 * index + 1, count) && isCBT(root->right, 2 * index + 2,  count));
                
}
bool isHeapUtil(  Node* root)
{ 
    if (root->left == NULL && root->right == NULL)
        return (true);
  
    if (root->right == NULL) {
        
        return (root->data >= root->left->data);
    }
    else {
        //  Check heap property at Node and Recursive check heapproperty at left and right subtree
        if (root->data >= root->left->data  && root->data >= root->right->data)
          
            return ((isHeapUtil(root->left))
                    && (isHeapUtil(root->right)));
        else
            return (false);
    }
}
bool isHEAP(Node* root){
    int index  = 0;
    int totalcount = countNodes(root);
 
 if( isCBT (root, index , totalcount ) && isHeapUtil(root))
    return true ;
else
    return false ;
}
int main( ){
   Node* root =  newNode(5);
     
    root->left = newNode(3);
    root->right = newNode(2);
    root->left->left = newNode(7);
    root->left->right = newNode(6);
    root->right->left = newNode(5);
    root->right->right = newNode(4);
    root->left->left->left = newNode(3);
    root->left->left->right = newNode(2);
    root->left->right->left = newNode(1);
 
    // Function call
    if (isHEAP(root)== true)
        cout << "Given binary tree is a Heap\n";
    else
        cout << "Given binary tree is not a Heap\n";
 
return 0;
}