 
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
 
// int isBST(struct  node* root){
//     static struct node *prev = NULL;
//     if(root!=NULL){
//         if(!isBST(root->left)){
//             return 0;
//         }
//         if(prev!=NULL && root->data <= prev->data){
//             return 0;
//         }
//         prev = root;
//         return isBST(root->right);
//     }
//     else{
//         return 1;
//     }
// }
 int IsBST(struct node *root, int val1, int val2)
{
        if(root == NULL)
                return 1;
        if(root->data < val1  ||  root->data > val2)
                return 0;
        return ( IsBST(root->left,val1,root->data) && IsBST(root->right,root->data,val2));
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
 
int val1;
int val2;
    if(IsBST(root,  val1,   val2)){
        printf("This is a bst" );
    }
    else{
        printf("This is not a bst");
    }
    return 0;
return 0;
}
