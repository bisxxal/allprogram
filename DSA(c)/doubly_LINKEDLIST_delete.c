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

void last_delete()  
{  
    struct node *ptr=head;  
    struct node *temp;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW\n");  
    }  
    // else if(head->next == NULL)  
    // {  
    //     head = NULL;   
    //     free(head);  
    //     printf("\nNode Deleted\n");  
    // }  
    else   
    {
        while(ptr->next != NULL)
        {
            ptr = ptr -> next;
           
        }
        temp=ptr->prev;
        temp->next=NULL;
        ptr  = NULL;
        free(ptr);
        printf("\nNode Deleted\n");
    }  
}
void deletbegin(){
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW\n");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("\nNode Deleted\n");  
    }  
    else{
        ptr=head;
        head=ptr->next;
        head->prev=NULL;
        ptr->next=NULL;
        ptr->prev=NULL;
        free(ptr);
printf("\nNode Deleted\n");  
    }
}

void delete_specified( )  
{  
    struct node *ptr, *temp;   
    int val;   
    printf("Enter the pos");  
    scanf("%d",&val);  
    temp = head;  
   
    for(int i=1; i<val-1;i++)
    temp = temp -> next;  
    if(temp -> next == NULL)  
    {  
        printf("\nCan't delete\n");  
    }  
    else if(temp -> next -> next == NULL)  
    {  
        
        temp ->next = NULL;  
        printf("\nNode Deleted\n");  
    }  
    else  
    {   
        ptr = temp -> next;  
        temp -> next = ptr -> next;  
        ptr -> next -> prev = temp;  
        free(ptr);  
        printf("\nNode Deleted\n");  
    }     
}  

void delified( )  
{  
    struct node *ptr, *ptr2,*ptr3;   
    int val;   
    printf("Enter the postion ");  
    scanf("%d",&val);  
    ptr = head;  
    while(ptr -> data != val)  
    ptr = ptr -> next;  
    if(ptr -> next == NULL)  
    {  
        printf("\nCan't delete\n");  
    }
    else  
    {
        ptr2=ptr->prev;
        ptr3=ptr->next;
        ptr2->next=ptr3;
        ptr3->prev=ptr2;
        ptr=NULL;
        free(ptr);
        
        printf("\nNode Deleted\n");  
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

//  last_delete(); 
 // deletbegin();
 // delpaticular();
 delete_specified( );

// delified( ) ;
    display();
   

    return 0;
}
