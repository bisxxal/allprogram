#include<stdio.h>
#include<stdlib.h>
#define SIZE 7
int cirQueue[SIZE],front=-1,back=-1;

void insert(){ 
    if((back+1)%SIZE==front)
        printf("Queue is overflow.\n");
    int element;
    printf("enter tha data into Queue");
    scanf("%d", &element);
        if((front=-1)&&(back=-1)){
            front=0;
            back=0;
             
             cirQueue[back]=element;
        }
        else{
            back=(back+1)%SIZE;
            cirQueue[back]=element;
        }
}
void delete(){
if((back=-1)&&(front=-1))
printf("Empty");
else if(front==back){
    back=-1;
    front=-1;
}
else{
        front=(front+1)%SIZE;
        printf("Queue is deleted \n");
}
}
void display(){
    int i=front;
 if((front=-1)&&(back=-1)){
printf("Empty");
 }
 else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=back)  
        {  
            printf("%d,", cirQueue[i]);  
            i=(i+1)%SIZE;  
        }  
    }  
}

int main(){
 
    // int choice;   
    // while(choice != 4)   
    // {     
        
    //     printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
    //     printf("\nEnter your choice ?");  
    //     scanf("%d",& choice);  
    //     switch(choice)  
    //     {  
    //         case 1:  
    //        insert();
    //         break;  
    //         case 2:  
    //         delete(); 
    //         break;  
    //         case 3:  
    //         display();  
    //         break;  
    //         case 4:  
    //         exit(0);  
    //         break;  
    //         default:   
    //         printf("\nEnter valid choice??\n");  
    //     }  
    // }  

    insert();
    insert();
    insert();
    display();
    return 0;
}