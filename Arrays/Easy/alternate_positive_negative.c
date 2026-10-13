#include <stdio.h>

void rearrange(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] >= 0) {
      if (i % 2 != 0) {
        int temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
      }
    }
  }
}

void main() {
  int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}, size = sizeof(arr) / sizeof(int);
  
  rearrange(arr, size);
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}
