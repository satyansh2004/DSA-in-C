#include <stdio.h>
#include <stdlib.h>

int *findDuplicates(int arr[], int size, int *return_size) {

  int *new_array = malloc((size / 2 + 1) * sizeof(int));

  for (int i = 0; i < size; i++) {

    int twice = 0;
    for (int j = i+1; j < size; j++) {
      if (arr[i] == arr[j]) {
        twice++;
      }
    }

    if (twice == 1) {
      new_array[i] = arr[i];
      twice = 0;
      *return_size = *return_size + 1;
    }
  }

  return new_array;
}

void main() {

  int arr[] = {2, 3, 1, 2, 3}, size = sizeof(arr) / sizeof(int), return_size = 0;

  int *result = findDuplicates(arr, size, &return_size);
  int *temp = result;

  for (int i = 0; i < return_size; i++) {
    printf("%d \n", *result);
    result++;
  }

  free(temp);
}
