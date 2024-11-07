#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *head,*tail=NULL;

int addnode(int data){
    struct node *newnode =  (struct node*)malloc (sizeof( struct node));
    newnode->data=data;
    newnode->link=NULL;

    if (head==NULL){
        head=newnode;
        tail=newnode;
    }
    else{
        tail->link=newnode;
        tail=newnode;

    }
}
void display(){
    struct node *ptr;
    ptr=head;
    if (head==NULL){
        printf(" empty");
    }
    else{
        while(ptr!=NULL){
            printf("node is %d",ptr->data);
            ptr=ptr->link;
            printf("\n");
        }
    }
}
void delbegin(){
    struct node *ptr=head;
    if(head==NULL){
        printf("empty linkedlist\n");
    }
else{
    head = ptr->link;  
            free(ptr);  
            printf("\n Node deleted from the begining \n");
}
}
 
void delend(){
       struct node *ptr,*ptr1;  
        if(head == NULL)  
        {  
            printf("\nlist is empty");  
        }  
        else if(head -> link == NULL)  
        {  
            head = NULL;  
            free(head);  
            printf("\nOnly node of the list deleted ...");  
        }  

        else{
            ptr = head;
            while(ptr ->link!= NULL){
              ptr1 = ptr;  
                ptr=ptr->link;
            }
            ptr1 ->link = NULL;
            free(ptr);
        }
}

void delpaticular(){
    int pos,i;
    struct node *ptr,*ptr2;
    printf("enete the position ");
    scanf("%d",&pos);
    ptr=head;
    for(i=0;i<pos-1;i++){
        ptr2=ptr;
        ptr=ptr->link;
        if(head==NULL){
            printf("\nThere are less than %d elements in the list..\n",pos);
            return;
        }
    }
    ptr2->link=ptr->link;
    free(ptr);
    printf(" deleted\n");
}

void deleteList()
{
    struct node *temp= head;
    while(head != NULL)
    {
        // temp ;

        head = head->link;

        free(temp);
    }
    printf("SUCCESSFULLY DELETED ALL NODES OF LINKED LIST\n");
}

int  main(){
        addnode(1);
        addnode(2);
        addnode(3);
        addnode(4);
        addnode(5);
        addnode(6);
        addnode(7);
       
display();
// delbegin();
// delend();
delpaticular();

// deleteList();

display();
}