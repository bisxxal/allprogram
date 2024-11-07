#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *tail = NULL;  

int addnode(int data){

struct node *newnode = (struct node*)malloc (sizeof (struct node));
newnode->data=data;
// newnode->next =NULL;

if(head==NULL){
    head=newnode;
    tail=newnode;
    newnode->next=head;
}
    else{
        tail->next=newnode;
        tail=newnode; 
        tail->next=head;
    }
}
int addbegin(int data){
        struct node *ptr= (struct node*)malloc (sizeof (struct node));
        struct node *temp;
        ptr->data=data;
        ptr->next=NULL;
        if(ptr==NULL)
            printf("cant be insert");   
        else if(head==NULL){
            head=ptr;
            ptr->next=head;
        }
        else{
            temp=head;
            while(temp->next!=head){
                temp=temp->next;
            }
            ptr->next=head;
            temp->next=ptr;
            head=ptr;
            printf("data inserted\n");
        }
}
void addatend(int data){
    struct node *ptr= (struct node*)malloc (sizeof (struct node));
        struct node *temp;
        ptr->data=data;
        ptr->next=NULL;
        if(ptr==NULL)
            printf("cant be insert");
        else if(head==NULL){
            head=ptr;
            ptr->next=head;
        }
        else{
            temp=head;
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=head;

            printf("data inserted\n");
        }
}
void addatpatipoas(int data){
    struct node *ptr= (struct node*)malloc (sizeof (struct node));
        struct node *temp;
        int pos ;
        printf("enter the position ");
        scanf("%d",&pos);
        ptr->data=data;
        ptr->next=NULL;
        if(ptr==NULL)
            printf("cant be insert");
        else if(head==NULL){
            head=ptr;
            ptr->next=head;
        }
        else{
            temp=head;
            for(int i=1;i<=pos-1;i++){
                temp=temp->next;
            }
                ptr->next=temp->next;
                temp->next=ptr;
            printf("data inserted\n");
        }
}

void display(){
    struct node *ptr=head;
    if(head==NULL){
        printf("empty");
    }
    else{
        do
        {
            printf("node is %d\n",ptr->data);
            ptr=ptr->next;
        }while(ptr!=head);
    }
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
    // addbegin(45);
//    addatend(90);
   addatpatipoas(67);
    printf("\n\n");
    display();
    return 0;
        
}
