
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

void rightsolve(Node *root ,int & maxlevel ,int level){

   if(root == NULL )
   return ;

   if (maxlevel < level){
    cout<< root->data << " ";
    maxlevel = level;
   }

   rightsolve( root->right , maxlevel , level+1);
   rightsolve( root->left , maxlevel , level+1);

}
 void rightView(  Node* root)
{
    int max_level = 0;
    rightsolve(root, max_level , 1);
}

int main()
{

    Node *root = newNode(1);
    
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->right->right = newNode(8);
 

    rightView(root);
    return 0;
}
