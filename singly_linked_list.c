#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

int main(){
  
  struct Node *head;

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

  //printing the linked list
  struct Node *temp = head;
  while(temp != NULL) {
    printf("%d -> ", temp->data);
      temp = temp->next;
  }
  printf("NULL");

  return 0;
}
