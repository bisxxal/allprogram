#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*tail=NULL;


void addnode(int data){
    struct node *newnode =  (struct node*)malloc (sizeof( struct node));
    newnode->data=data;

    if(head==NULL){
        head=newnode;
        tail=newnode;
       tail->next=NULL;

    }
    else{
        tail->next=newnode;
        newnode->prev=head;
        tail=newnode;
         tail->next = NULL;
    }
}

void addbegin(int item)  
{  
   
   struct node *ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");
         return;
   }  
   else  
   {
       ptr->data=item;  
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;
       head=ptr; 
}  
}
void insertend(int item){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));  
    struct node *curent=head;
    if(ptr==NULL){
        printf("empty");
        
    }

    else{
        ptr->data=item;

        while(curent->next!=NULL){
             curent=curent->next;
        }
        curent->next=ptr;
        ptr->prev=curent;
        ptr->next=NULL;
    }
    printf("node inserted");
}

void addatspec(int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));  
    struct node *temp=head;
        int i,loc;
    if(ptr==NULL){
        printf("\n OVERFLOW");
    }
    else{
        printf("enter the postion to insert element : ");
        scanf("%d",&loc);

         for(i=1;i<loc-1;i++){
           temp = temp->next;

           if(temp==NULL){
             printf("\ncan't insert\n");  
               return;
           } 
           }
           ptr->data=data;
           ptr->next=temp->next->next;

           ptr->prev=temp;
           temp->next=ptr;
         
    }
}
void display(){
    struct node *ptr=head;
    if(head==NULL){
        printf("ENPTY \n");
        return ;
    }
    else{
        while(ptr!=NULL){
            printf(" node is %d",ptr->data);
            ptr=ptr->next;
            printf("\n");
        }
    }
   
}
int main(){
  addnode(1);  
    addnode(2);  
    addnode(3);  
    addnode(4);  
    addnode(5); 

    display();
    printf("\n \n ");
    // addbegin(45);
    // insertend(90);

    addatspec(56);
    display();

    return 0;
}
