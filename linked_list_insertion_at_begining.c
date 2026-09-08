#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head = NULL;

int insertAtBeg(int input) {

  struct Node *newnode = malloc(sizeof(struct Node));

  if (head == NULL) {
    head = newnode;
    newnode->data = input;
    newnode->next = NULL;

    return 0;
  }

  newnode->data = input;
  newnode->next = head;
  head = newnode;

  return 0;
}

void display() {
  struct Node *temp = head;

  while(temp != NULL) {
      printf("%d -> ", temp->data);
      temp = temp->next;
  }
  printf("NULL");
}


int main() {
  
  insertAtBeg(10);
  insertAtBeg(20);
  insertAtBeg(30);
  insertAtBeg(40);
  insertAtBeg(50);
  insertAtBeg(60);

  display();

  return 0;
}
