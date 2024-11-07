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
int  main(){
struct node  *root=insert(90);
root->left=insert(50);
root->right=insert(80);
root->right->left=insert(45);
root->right->right=insert(78);

root->left->left =insert(14);
root->left->right=insert(25);
inorder(root);
return 0;
}
