#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10
int lenght = 0;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

int isFull()
{
    if (lenght >= STACK_SIZE)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if (head == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int x)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = x;

    if (isEmpty() == 1)
    {
        newnode->next = NULL;
        head = newnode;
        lenght = 1;
        return;
    }

    if (isFull() == 1)
    {
        printf("Stack is Full\n");
        return;
    }

    struct Node *temp = head;

    newnode->next = temp;
    head = newnode;
    lenght++;
}

void pop()
{

    if (isEmpty() == 1)
    {
        printf("No element to pop\n");
        return;
    }

    struct Node *temp = head;
    head = head->next;
    free(temp);
}

int peek()
{
    if (isEmpty() == 1)
    {
        printf("Stack is Empty\n");
    }

    return head->data;
}

void display()
{
    struct Node *temp = head;

    if (isEmpty() == 1)
    {
        printf("NULL\n");
        return;
    }

    while (temp->next != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);
}

int main()
{
    display();

    push(10);
    push(20);
    push(10);
    push(60);

    display();

    pop();

    display();

    push(50);
    push(30);
    push(440);
    push(70);
    push(0);
    push(78);
    push(6);
    push(11);
    
    display();

    free(head);
    return 0;
}