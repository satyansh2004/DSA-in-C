#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head;

int delete(int key) {
  
  struct Node *temp = head;
  struct Node *before_temp = head;
  while (temp != NULL) {
    if (key == temp->data) {
      before_temp->next = temp->next;
      free(temp);
      return 0;
    }
    before_temp = temp;
    temp = temp->next;
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

  head = first;

  first->data = 10;
  first->next = second;

  second->data = 20;
  second->next = third;

  third->data = 30;
  third->next = NULL;

  //before deletion
  display();

  delete(20);

  //afetr deletion
  display();
  return 0;
}
