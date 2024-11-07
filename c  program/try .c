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
void delatbegin(){
    struct node *ptr,*temp;
    if(head==NULL)
    printf("cant deleted ");

    else if(head->next==head){
       head=NULL;
        free(head);
printf("Node DEleted ");
    }
    else{
       temp=head;
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=head->next;
            free(head);
            head=temp->next;
        printf("Node DEleted ");
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
// delatend();
delatbegin();
    printf("\n\n");
    display();
    return 0;
        
}
