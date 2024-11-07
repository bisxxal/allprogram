#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *back=NULL;
 struct node *front=NULL;

void insert(){ 
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    int element;
    printf("enter tha data into Queue");
    scanf("%d", &element);
     ptr->data=element;
     ptr->next=NULL;
     if ((back == NULL) && (front == NULL)){
        front=back=ptr;
        ptr->next=front;
     }
     else{
        back->next=ptr;
        back=ptr;
        ptr->next=front;

     }
}
void delete(){
     struct node *ptr;
    ptr=front;
 
    if (front==NULL && back==NULL)
printf("Empty");
else if (front==back){
    front=back=NULL;
    free(ptr);
}
else{
    front=front->next;
    back->next=front;
    free(ptr);
}
}
void display(){
     struct node *ptr;
    ptr=front;
   
    if (front==NULL && back==NULL)
    printf("Empty");
    else{
          do
	{
	  printf (" %d", ptr->data);
	  ptr = ptr->next;
	}
      while (ptr != front);
    }
    
}
int peek()  
{  
    if((front==NULL) &&(back==NULL))  
    {  
        printf("\nQueue is empty");  
    }  
    else  
    {  
        printf("\nThe front element is %d", front->data);  
    }  
}  
  
int main(){
 
    int choice;   
    while(choice !=5)   
    {     
        
        printf("\n1.insert an element\n2.Delete an element\n3.Display the cirQueue\n4.Exit\n");  
        printf("\nEnter your choice ?");  
        scanf("%d",& choice);  
        switch(choice)  
        {  
            case 1:  
           insert();
            break;  
            case 2:  
            delete();
            break;
            case 3:
            display();
            break;   
            peek();  
            break;  
            case 5:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }
    return 0;
}