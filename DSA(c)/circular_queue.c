#include<stdio.h>
#include<stdlib.h>
#define SIZE 7
int cirQueue[SIZE],front=-1,back=-1;

void insert(){
 
    int element;
     printf("enter  data  ");
    scanf("%d", &element);
    if ((front == 0 && back == SIZE-1) ||
            ((back+1) % SIZE == front))
    {
        printf("\nQueue is Full");
        return;
    }
 
    else if (front == -1) /* Insert First Element */
    {
        front = back = 0;
        cirQueue[back] = element;
    }
 
    else if (back == SIZE-1 && front != 0)
    {
        back = 0;
        cirQueue[back] = element;
    }
 
    else
    {
        back++;
        cirQueue[back] = element;
    }
}
void delete(){

    if ( front == -1 && back ==-1){
    printf(" Queue is empty ");
    return;
    }

    if( front== back)
    {
        back = front = -1;
    }
    if (front == SIZE-1)
    front = 0;

    else 
    front ++;  
}

void display(){

    if ( front == -1){
     printf("\nQueue is Empty");
        return;
    }
    printf ("\nThe cirQueue looks like: \n");
      for (int i = front; i != back; i = (i + 1) % SIZE)
	{
	  printf ("%d ", cirQueue[i]);
	}
    //   printf ("%d \n\n", cirQueue[i]);
}
int main(){
    
      insert();
           insert();
           insert();
           insert();
           insert();
           insert();
              
            
              
            display();  
            delete(); 
            display();    
 
    return 0;
}