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

int deletion(int kth) {

  struct Node *temp = head;
  struct Node *before_temp = head;

  if (kth > length_linked_list()) {
    printf("Length of %d is less than kth value %d\n", length_linked_list(), kth);
    return 0;
  }

  for (int i = 1; i <= length_linked_list(); i++) {
    if (i % kth == 0) {
      struct Node *current = temp;

      before_temp->next = temp->next;
      temp = temp->next;
      
      free(current);
    }
    else {
    before_temp = temp;
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
  fifth->next = NULL;

  //before kth deletion

  display();

  //after kth deletion

  deletion(2);
  display();

  return 0;
}
