#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};


int search(struct Node *head, int key){
  struct Node *temp = head;

  while(temp != NULL) {
    if (key == temp->data) {
      return 1;
    }
    temp = temp->next;
  }

  return 0;

}


int main() {


  int key;
  printf("Enter num to search: ");
  scanf("%d", &key);

  struct Node *head;
  
  struct Node *first = malloc(sizeof(struct Node));
  struct Node *second = malloc(sizeof(struct Node));
  struct Node *third = malloc(sizeof(struct Node));
  
  head = first;

  first->data = 22;
  first->next = second;

  second->data = 190;
  second->next = third;

  third->data = 9;
  third->next = NULL;

  int result = search(head, key);

  if (result == 1) {
    printf("%d is present in linked list", key);
  } else {
    printf("%d is not present in linked list", key);
  }

  return 0;
}
