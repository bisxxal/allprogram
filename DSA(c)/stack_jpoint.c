#include <stdio.h>
#include <stdlib.h>
int top = -1, stack[100], choice, i, j, n;

void push()
{
    int data;
    if (top == n)
        printf("cant insert");
    else
    {
        printf("enete the data ");
        scanf("%d", &data);
        top++;
        stack[top] = data;
        printf("data inserted \n");
    }
}
void show()
{
    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
    if (top == -1)
    {
        printf("Stack is empty");
    }
}

void pop()
{
    if (top == -1)
        printf("canat deleted");
    else
    {
        top--;
        printf("deldeted\n");
    }
}
int peek()
{
    if (top == -1)
    {
        printf("UNDERFLOW ");
        return -1;
    }
    else
    {
        return stack[top];
    }
}
int main()
{
    printf("enetr element to enter ");
    scanf("%d", &n);
    printf("enter 1 to insert ,2 to dedledtd ,3 to dispaly ,5 to exit ");
    do
    {
        printf("eneter your choice ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("enter valid choice \n");
            break;
        }
    } while (choice != 5);
}
