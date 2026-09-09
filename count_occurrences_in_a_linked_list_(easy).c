// Given a singly linked list and a key, 
// the task is to count the number of occurrences 
// of the given key in the linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head = NULL;

int frequency(int key) {

  int freq = 0;

  struct Node *temp = head;

  while(temp != NULL) {
    if (key == temp->data) {
      freq = freq + 1;
    }

    temp = temp->next;
  }

  return freq;
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

  int key = 1;

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

  third->data = 1;
  third->next = fourth;

  fourth->data = 3;
  fourth->next = fifth;

  fifth->data = 1;
  fifth->next = NULL;

  display();

  printf("Frequency of key %d: %d", key, frequency(key));
  return 0;
}
