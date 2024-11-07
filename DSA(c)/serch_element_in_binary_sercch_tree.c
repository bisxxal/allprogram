 
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
                                        // recursive serach in bst
// struct node *search(struct node *root,int key)
// {
//        if (root==NULL)
//        return 0;
//         if(key==root->data )
//        return root;
//        else if(key<root->data)
//        return search(root->left,key);
//        else 
//        return search(root->right,key);
// }

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

//  int val;
// printf("enter the data to seaech:");
// scanf("%d",&val);
  root= search(root,55);
    if(root!=NULL)
        printf("%d key found ",root->data );
    else
        printf("key not found");
     
return 0;
}
