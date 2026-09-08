#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head = NULL;

int insertBefore(int input, int key) {
  
  struct Node *newnode = malloc(sizeof(struct Node));

  if (head == NULL) {
    newnode->data = input;
    newnode->next = NULL;
    head = newnode;

    return 0;
  }
  
  struct Node *current = head;
  struct Node *before_current;

  while (current != NULL) {
      if (key == current->data) {
        newnode->data = input;
        before_current->next = newnode;
        newnode->next = current;
    }

    before_current = current;
    current = current->next;
  }

  return 0;

}


void display() {
  struct Node *temp = head;

  while (temp != NULL) {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL");
}

int main() {

  struct Node *first = malloc(sizeof(struct Node));
  struct Node *second = malloc(sizeof(struct Node));
  struct Node *third = malloc(sizeof(struct Node));

  head = first;

  first->data = 10;
  first->next = second;

  second->data = 20;
  second->next = third;

  third->data = 30;
  third->next = NULL;

  insertBefore(15, 20);

  display();
  return 0;
}
