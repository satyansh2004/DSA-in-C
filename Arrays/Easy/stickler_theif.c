#include <stdio.h>
#include <stdlib.h>

int findMaxSum(int arr[], int size) {

  int *max_array = malloc(size * sizeof(int));
  int count = 0, max_num = 0;

  for (int i = 1; i < size; i++) {

    int max = 0;

    for (int j = 0; j < size; j = j + (i+1)) {
      max = max + arr[j];
    }

    max_array[count] = max;
    count++;
  }

  max_num = max_array[0];
  for (int i = 1; i < count; i++) {

    if (max_num < max_array[i]) {
      max_num = max_array[i];
    }

  }

  return max_num;
}

void main() {
  int arr[] = {5, 3, 4, 11, 2}, size = sizeof(arr) / sizeof(int);
  printf("Max: %d", findMaxSum(arr, size));
}
