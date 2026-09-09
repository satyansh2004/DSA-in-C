#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head = NULL;

int length_linked_list() {
  struct Node *temp = head;
  int length = 0;
  while (temp != NULL) {
    length++;
    temp = temp->next;
  }

  return length;
}

int middleNode() {

  struct Node *temp = head;

  if (length_linked_list() <= 0) {
    printf("There are %d nodes in linked list\n");
  }
  else {
    int mid = (length_linked_list() / 2) + 1;
    for (int i = 1; i <= length_linked_list(); i++) {
      if (i == mid) {
        printf("Mid Node: %d\n", temp->data);
        return 0;
      }
      temp = temp->next;
    }
  }
  return 0;
}

void display() {
  struct Node *temp = head;
  while (temp != NULL) {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

int main() {
  struct Node *first = malloc(sizeof(struct Node));
  struct Node *second = malloc(sizeof(struct Node));
  struct Node *third = malloc(sizeof(struct Node));
  struct Node *fourth = malloc(sizeof(struct Node));
  struct Node *fifth = malloc(sizeof(struct Node));
  struct Node *sixth = malloc(sizeof(struct Node));

  head = first;

  first->data = 10;
  first->next = second;

  second->data = 20;
  second->next = third;

  third->data = 30;
  third->next = fourth;

  fourth->data = 40;
  fourth->next = fifth;

  fifth->data = 50;
  fifth->next = sixth;

  sixth->data = 60;
  sixth->next = NULL;

  display();
  middleNode();
  return 0;
}
