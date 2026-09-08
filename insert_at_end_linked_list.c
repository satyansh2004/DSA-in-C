#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head = NULL;

int insertAtEnd(int input) {
  
  struct Node *newnode = malloc(sizeof(struct Node));
  
  if (head == NULL) {
    newnode->data = input;
    newnode->next = NULL;
    head = newnode;

    return 0;
  }

  struct Node *current = head;

  while(current->next != NULL) {
    current = current->next;
  }

  newnode->data = input;
  newnode->next = NULL;
  current->next = newnode;

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
  
  insertAtEnd(10);
  insertAtEnd(20);
  insertAtEnd(30);
  insertAtEnd(40);
  insertAtEnd(50);
  insertAtEnd(60);
  insertAtEnd(70);

  display();
  return 0;
}
