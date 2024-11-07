#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top;
void push(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    if (ptr == NULL)
    {
        printf("empty");
    }
    if (top == NULL)
    {
        top = ptr;
        ptr->next = NULL;
    }
    else
    {
        ptr->next = top;
        top = ptr;
    }
}
void show()
{
    struct node *ptr = top;
    if (top == NULL)
    {
        printf("stack overflow");
        return;
    }
    else
    {
        while (ptr != NULL)
        {
            printf("data is %d \n ", ptr->data);
            ptr = ptr->next;
        }
    }
}
void pop()
{
    struct node *ptr;
    if (top == NULL)
    {
        printf("cant deleted");
        return;
    }
    else
    {
        ptr = top;
        top = top->next;
        int val = ptr->data;
        free(ptr);
        printf("data deleted\n ");
    }
}
int main()
{
    push(45);
    push(56);
    push(98);
    push(76);
    push(67);
    push(23);

    show();
    pop();
    show();
}