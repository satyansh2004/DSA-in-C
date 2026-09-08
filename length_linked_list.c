#include <stdio.h>
#include <stdlib.h>


struct Node {
  int data;
  struct Node *next;
};


int length_linked_list(struct Node *head) {

  struct Node *temp = head;

  int length = 0;

  while(temp != NULL) {
    length = length + 1;
    temp = temp->next;
  }

  return length;

}


int main() {

  struct Node *head;

  struct Node *first = malloc(sizeof(struct Node));
  struct Node *second = malloc(sizeof(struct Node));
  struct Node *third = malloc(sizeof(struct Node));

  head = first;

  first->data = 11;
  first->next = second;

  second->data= 22;
  second->next = third;

  third->data = 33;
  third->next = NULL;


  printf("Length of linked list is: %d", length_linked_list(head));

  return 0;
}
