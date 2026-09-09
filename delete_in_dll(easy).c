#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *prev;
  struct Node *next;
};

struct Node *head = NULL;

int delete(int key) {
  struct Node *temp = head;
  struct Node *before_temp = head;
  struct Node *after_temp = head;
  while(temp != NULL) {
    if(key == temp->data) {
      before_temp->next = after_temp;
      after_temp->prev = before_temp;
      free(temp);
      return 0;
    }
    before_temp = temp;
    temp = temp->next;
    after_temp = temp->next;
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
  struct Node *fourth = malloc(sizeof(struct Node));


  head = first;

  first->data = 1;
  first->prev = NULL;
  first->next = second;

  second->data = 2;
  second->prev = first;
  second->next = third;

  third->data = 3;
  third->prev = second;
  third->next = fourth;

  fourth->data = 4;
  fourth->prev = third;
  fourth->next = NULL;

  display();

  delete(3);

  display();
}
