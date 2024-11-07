#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head, *tail = NULL;  

int addnode(int data){

struct node *newnode = (struct node*)malloc (sizeof (struct node));
newnode->data=data;
newnode->link =NULL;

if(head==NULL){
    head=newnode;
    tail =newnode;
}
    else{
        tail->link=newnode;
        tail=newnode; 
    }
}


 void display(){
    if(head==NULL){
        printf("empty");

    }
   struct node *ptr=head;

   while(ptr!=NULL){
    printf("nod is %d",ptr->data);
    ptr=ptr->link;
       printf("\n");
   }

 }

void countnode(){
    int count =0;
     if(head==NULL){
        printf("empty");

    }
   struct node *ptr=head;

   while(ptr!=NULL){
    count++;
    ptr=ptr->link;

    
       
   }
printf("count is %d",count);
}
int main()
{
    addnode(1);
    addnode(2);
    addnode(3);
    addnode(4);
    addnode(5);
    addnode(6);

    
    display();
    countnode();
    return 0;
    }

