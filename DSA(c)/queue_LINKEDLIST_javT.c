
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *back,*front;
void enQueue( );
void deQueue();
void display();
int main()
{

    int choice;   
    while(choice != 4)   
    {     
        // printf("\n*************************Main Menu*****************************\n");  
        // printf("\n=================================================================\n");  
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
        printf("\nEnter your choice ?");  
        scanf("%d",& choice);  
        switch(choice)  
        {  
            case 1:  
            enQueue();  
            break;  
            case 2:  
            deQueue();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }  
     return 0;
} 
 void enQueue( ){
    struct  node *ptr=( struct  node*)malloc(sizeof (struct  node));
    if(ptr==NULL){
        printf("\nOVERFLOW\n");  
        return;  
    }
else{
    int data;
    printf("enter the data\n");
    scanf("%d",&data);
    ptr->data=data;
    if(front==NULL){
        front=ptr;
        back=ptr;
          front -> next = NULL;  
            back -> next = NULL;  
    }
    else{
        back->next=ptr;
        back=ptr;
        back->next=NULL;
    }
}
 }
void   deQueue(){
 struct  node *ptr;
        if(front==NULL){
            printf("Queue is empty");
            return;
        }
        else{
           ptr=front;
          front =front->next;
           free(ptr); 
        }
        printf("data deleted \n");
}

 void display(){
     struct  node *ptr=front;
if(back==NULL){
    printf("Empty\n");
    return;
}
else{
    
    while (ptr!=NULL){
        printf("data is %d ", ptr->data);
        ptr=ptr->next;
    }
}
 }