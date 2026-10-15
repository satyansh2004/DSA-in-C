#include <stdio.h>

int firstSearch(int arr[], int size, int k) {

  for (int i = 0; i < size; i++) {
    if (arr[i] == k) {
      return i;
    }
  }

  return -1;
}

void main() {
  int arr[] = {11, 22, 33, 44, 55}, size = sizeof(arr) / sizeof(int), k = 445;
  printf("%d", firstSearch(arr, size, k));
}
