#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node  *left;
    struct node  *right;
};
struct node* insert(int val){
    struct node *newnode  =(struct node *)malloc (sizeof(struct node ));
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
return(newnode);
}
void  inorder(struct node *root){
    if(root==NULL)
    return;
    else{ 
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
 
struct node *search(struct node *root,int key)
{
    while(root!=NULL){
       
        if(key==root->data )
       return root;
       else if(key<root->data)
        root=root->left;
       else 
      root=root->right;
    }
    return 0;
}
struct node *inOrderPredecessor(struct node* root){
    root = root->left;
    while (root->right!=NULL)
    {
        root =root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value){

    struct node* iPre;
    if (root == NULL){
        return NULL;
    }
    if (root->left==NULL&&root->right==NULL){
        free(root);
        return NULL;
    }

    //searching for the node to be deleted
    if (value < root->data){
        root-> left = deleteNode(root->left,value);
    }
    else if (value > root->data){
        root-> right = deleteNode(root->right,value);
    }
    //deletion strategy when the node is found
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
} 
int  main(){
struct node  *root=insert(70);
root->left=insert(50);
root->right=insert(80);
root->right->left=insert(75);
root->right->right=insert(85);

root->left->left =insert(14);
root->left->right=insert(55);
inorder(root);
printf("\n");
 
 
    deleteNode(root, 70);
    inorder( root);
return 0;
}
