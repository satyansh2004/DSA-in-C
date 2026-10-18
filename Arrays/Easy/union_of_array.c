#include <stdio.h>
#include <stdlib.h>

int* findUnion(int* a, int n, int* b, int m, int* returnSize) {

  int *new_array = malloc((n+m) * sizeof(int));

  for (int i = 0; i < n; i++) {

    int occurence = 0;

    for (int j = 0; j < (n+m); j++) {

      if (a[i] == new_array[j]) {
        occurence++;
        break;
      }
    }
    if (occurence > 0) {
      continue;
    }
    else {
      new_array[*returnSize] = a[i];
      *returnSize = *returnSize + 1;
    }
  }

    for (int i = 0; i < m; i++) {

    int occurence = 0;

    for (int j = 0; j < (n+m); j++) {

      if (b[i] == new_array[j]) {
        occurence++;
        break;
      }
    }
    if (occurence > 0) {
      continue;
    }
    else {
      new_array[*returnSize] = b[i];
      *returnSize = *returnSize + 1;
    }
  }
  
  for (int i = 0; i < *returnSize; i++) {
    for (int j = i+1; j < *returnSize; j++) {
      if (new_array[i] > new_array[j]) {
        int temp = new_array[i];
        new_array[i] = new_array[j];
        new_array[j] = temp;
      }
    }
  }

  return new_array;

}

void main() {
  int a[] = {5, 5, 6, 3, 2, 10, 1}, b[] = {5, 4, 9, 3, 3, 9, 3}, size_a = sizeof(a) / sizeof(int), size_b = sizeof(b) / sizeof(int), returnSize = 0;

  int *result = findUnion(a, size_a, b, size_b, &returnSize);

  for (int i = 0; i < returnSize; i++) {
    printf("%d ", *result);
    result++;
  }
}
