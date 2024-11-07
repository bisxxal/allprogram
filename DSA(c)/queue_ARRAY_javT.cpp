 
#include <stdio.h>
#include <stdlib.h>
#define SIZE_OF_QUEUE 7
 
int Queue[SIZE_OF_QUEUE], front = -1, back = -1;
void enQueue(  int data )
{
   
    if (back == SIZE_OF_QUEUE - 1)
    {
        printf(" queue is full \n");
    }
    else
    {
         
        if (front == -1)
        {
            front = 0;
        }
        back++;
        Queue[back] = data;
       
    }
}

void deQueue()
{
    if (front == -1)
    {
        printf("Queue is empty ");
    }
    else
    {
        front++;
        if (front > back)
        {
            front = back = -1;
        }
        
    }
}

// Function to print the queue
void display()
{
    if (back == -1)
    {
        printf("QUeue is empty");
    }
else{
    int i;
    for(i=front;i<=back;i++){
        printf("data are %d \t", Queue[i]);
    }
}
    printf("\n");
}
int main()
{ 
            enQueue(1 );
            enQueue(2 );
            enQueue(3 );
            enQueue(4 );
            enQueue(5 );
            enQueue(6 );
            enQueue( 7);
        
            display();
           
            deQueue();
           
            display();

    return 0;
}

