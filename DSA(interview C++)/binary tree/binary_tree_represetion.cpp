#include<bits/stdc++.h>
using namespace std;

class node {
    public:

    int data;
    node *left ,*right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right = NULL;
    }

};  

node *builtTree(node *root){
    cout<<" enter the data "<<endl;
    int data;cin>>data;

    root= new node (data);
    if (data == -1)
    return NULL;

    cout<< "Enter data for inserting in lefr "<< endl;
    root -> left = builtTree (root-> left);

     cout<< "Enter data for inserting in right "<< endl;
    root -> right = builtTree (root-> right);

    return root;
}
int main( ){
node *root = NULL;

root = builtTree(root );
return 0;
}