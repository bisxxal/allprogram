#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *tail = NULL;

int addnode(int data)
{

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}

void display()
{
    if (head == NULL)
    {
        printf("empty");
    }
    struct node *ptr = head;

    while (ptr != NULL)
    {
        printf("nod is %d", ptr->data);
        ptr = ptr->next;
        printf("\n");
    }
}

void beginsert(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        ptr->data = item;
        ptr->next = head;
        head = ptr;
    }
}

// end node
void endnode(int a)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        ptr->data = a;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
        }
    }
}
void randominsert(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    int i, loc;
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {

        printf("Enter the location");
        scanf("%d", &loc);
        ptr->data = item;
        temp = head;
        for (i = 0; i < loc - 1; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNode inserted");
    }
}
bool search(struct node* head, int x)
{
    // Base case
    if (head == NULL)
        return false;
 
    // If key is present in current node, return true
    if (head->data == x)
        return true;
 
    // Recur for remaining list
    return search(head->next, x);
}
 void sortList() {  
        //Node current will point to head  
        struct node *current = head, *index = NULL;  
        int temp;  
          
        if(head == NULL) {  
            return;  
        }  
        else {  
            while(current != NULL) {  
                //Node index will point to node next to current  
                index = current->next;  
                  
                while(index != NULL) {  
                    //If current node's data is greater than index's node data, swap the data between them  
                    if(current->data > index->data) {  
                        temp = current->data;  
                        current->data = index->data;  
                        index->data = temp;  
                    }  
                    index = index->next;  
                }  
                current = current->next;  
            }      
        }  
    }  
int main()
{
    endnode(9);
    endnode(7);
    endnode(2);
    endnode(5);
    endnode(4);
    endnode(3);
// 9 7 2 5 4 
    display();
    // randominsert(90);
    printf("sorting ll \n");
    sortList();
    display();

    // search(head,3) ? printf("Yes") : printf("No");
    return 0;
}
