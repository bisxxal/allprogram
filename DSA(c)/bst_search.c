#include <stdio.h>
#include <stdlib.h>
struct node {
   int data;
   struct node *leftChild, *rightChild;
};
struct node *root = NULL;
struct node *newNode(int item){
   struct node *temp = (struct node *)malloc(sizeof(struct node));
   temp->data = item;
   temp->leftChild = temp->rightChild = NULL;
   return temp;
}
void insert(int data){
   struct node *tempNode = (struct node*) malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;
   tempNode->data = data;
   tempNode->leftChild = NULL;
   tempNode->rightChild = NULL;
   
   //if tree is empty
   if(root == NULL) {
      root = tempNode;
   } else {
      current = root;
      parent = NULL;
      while(1) {
         parent = current;
         
         //go to left of the tree
         if(data < parent->data) {
            current = current->leftChild;
            
            //insert to the left
            if(current == NULL) {
               parent->leftChild = tempNode;
               return;
            }
         }//go to right of the tree
         else {
            current = current->rightChild;
            
            //insert to the right
            if(current == NULL) {
               parent->rightChild = tempNode;
               return;
            }
         }
      }
   }
}
struct node* search(int data){
   struct node *current = root;
   printf("\nVisiting elements: ");
   while(current->data != data) {
      if(current != NULL) {
         printf("%d ",current->data);
         
         //go to left tree
         if(current->data > data) {
            current = current->leftChild;
         }//else go to right tree
         else {
            current = current->rightChild;
         }
         
         //not found
         if(current == NULL) {
            return NULL;
         }
      }
   }
   return current;
}
void printTree(struct node* Node){
   if(Node == NULL)
      return;
   printTree(Node->leftChild);
   printf("   %d", Node->data);
   printTree(Node->rightChild);
}
int main(){
   insert(55);
   insert(20);
   insert(90);
   insert(50);
   insert(35);
   insert(15);
   insert(65);
   printf("Insertion done\n");  
   printTree(root);
   struct node* k;
   // saerching the element
   k = search(90);
   if(k != NULL)
      printf("\nElement %d found", k->data);
   else
      printf("\nElement not found");
   return 0;
}