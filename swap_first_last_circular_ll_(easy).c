#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head = NULL;

int swap() {
  struct Node *temp = head;
  struct Node *before_temp = head;
  struct Node *temp2 = head;
  
  while(temp->next != head) {
    before_temp = temp;
    temp = temp->next;
  }

  temp->next = head->next;
  head = temp;

  before_temp->next = temp2;
  temp2->next = temp;
  return 0;
}

void display() {
  struct Node *temp = head;

  while(temp->next != head) {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }

  printf("%d\n", temp->data);
}

int main() {

  struct Node *first = malloc(sizeof(struct Node));
  struct Node *second = malloc(sizeof(struct Node));
  struct Node *third = malloc(sizeof(struct Node));
  struct Node *fourth = malloc(sizeof(struct Node));

  head = first;

  first->data = 1;
  first->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = fourth;

  fourth->data = 4;
  fourth->next = head;

  //before swapping
  display();

  //after swapping
  swap();
  display();

}


