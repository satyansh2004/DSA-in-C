//Given the head of a circular linked list, 
//print the data of the nodes in the linked list starting from the head node, 
//traversing the list exactly once.

#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head = NULL;

void display() {
  
  struct Node *temp = head;

  while (temp->next != head) {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("%d", temp->data);
}

int main() {

  struct Node *first = malloc(sizeof(struct Node));
  struct Node *second = malloc(sizeof(struct Node));
  struct Node *third = malloc(sizeof(struct Node));
  struct Node *fourth = malloc(sizeof(struct Node));
  struct Node *fifth = malloc(sizeof(struct Node));

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
  fifth->next = head;

  display();

}

