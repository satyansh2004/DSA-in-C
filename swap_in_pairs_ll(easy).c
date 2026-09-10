#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head = NULL;

int length_ll() {
  int length = 0;
  struct Node *temp = head;
  while(temp != NULL) {
    length++;
    temp = temp->next;
  }
  return length;
}

int swapping() {
  
  struct Node *current = head;
  struct Node *current_next = current->next;

  struct Node *temp = NULL;

  head = current_next;
  current->next = current_next->next;
  current_next->next = current;

  struct Node *curr = head->next->next;

  while(curr != NULL) {
    if(length_ll() % 2 != 0 && curr->next == NULL) {
      return 0;
    }
    temp = current;
    current = current->next;
    current_next = current->next;

    temp->next = current_next;
    current->next = current_next->next;
    current_next->next = current;


    curr = curr->next;
  }

  return 0;
}

void display() {
  struct Node *temp = head;

  while(temp != NULL) {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

int main() {

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

  display();

  swapping();

  display();
return 0;
}
