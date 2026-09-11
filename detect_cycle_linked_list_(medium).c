#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *head = NULL;

int detect()
{
  struct Node *slow = head;
  struct Node *fast = head;

  slow = head->next;
  fast = head->next->next;

  if (slow == fast)
  {
    return 1;
  }
  else
  {
    while (slow && fast && fast->next)
    {
      if (slow == fast)
      {
        return 1;
      }
      slow = slow->next;
      fast = fast->next->next;
    }
    return 0;
  }

  return 0;
}

int main()
{
  struct Node *first = malloc(sizeof(struct Node));
  struct Node *second = malloc(sizeof(struct Node));
  struct Node *third = malloc(sizeof(struct Node));
  struct Node *foruth = malloc(sizeof(struct Node));
  struct Node *fifth = malloc(sizeof(struct Node));
  struct Node *sixth = malloc(sizeof(struct Node));

  head = first;

  first->data = 1;
  first->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = foruth;

  foruth->data = 4;
  foruth->next = fifth;

  fifth->data = 5;
  fifth->next = sixth;

  sixth->data = 6;
  sixth->next = NULL;

  if (detect() == 1)
  {
    printf("Loop");
  }
  else
  {
    printf("No Loop");
  }

  return 0;
}
