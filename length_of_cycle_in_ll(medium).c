#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

int length()
{

    struct Node *temp = head;

    struct Node *visited[20];
    int count = 0;
    int i = 0;
    while (temp != NULL)
    {

        for (int i = 0; i < 20; i++)
        {
            if (temp == visited[i])
            {
                struct Node *new = temp;

                do
                {
                    count++;
                    new = new->next;
                } while (temp != new);
                return count;
            }
        }

        visited[i] = temp;
        temp = temp->next;
        i++;
    }

    return 0;
}

int main()
{
    struct Node *first = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));
    struct Node *fourth = malloc(sizeof(struct Node));
    struct Node *fifth = malloc(sizeof(struct Node));
    struct Node *sixth = malloc(sizeof(struct Node));

    head = first;

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = sixth;

    sixth->data = 6;
    sixth->next = fourth;

    printf("Length of loop: %d", length());
    return 0;
}
