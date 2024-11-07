 
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
    
void insertnew(struct node *root,int key)
{
    struct node *ptr=NULL;
    while(root!=NULL){
       ptr=root;
        if(key==root->data )
       return  ;
       else if(key<root->data)
        root=root->left;
       else 
      root=root->right;
    }
    struct node *newele=insert(key);
    if (key<ptr->data )
     ptr->left = newele;
     else 
      ptr->right = newele;
   
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

 int val;
printf("enter the data to insert:");
scanf("%d",&val);
insertnew(root,val);
printf("\n");
inorder(root);
return 0;
}
