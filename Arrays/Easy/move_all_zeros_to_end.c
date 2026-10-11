#include <stdio.h>

void pushZerosToEnd(int arr[], int size) {

  int zeroes_present = 1;
  for (int i =0; i < size; i++) {
    if (arr[i] != 0) {
      zeroes_present = 0;
    }
    else {
      zeroes_present = 1;
    }
  }

  if (zeroes_present == 0) {
    printf("No zero in the array");
    return;
  }

  for (int i = 0; i < size; i++) {

    if (arr[i] == 0) {

      int temp_index = size - 1;

      if (arr[temp_index] == 0) {
        temp_index = temp_index - 1;
      }

      int temp = arr[temp_index];
      arr[i] = temp;
      arr[temp_index] = 0;

    }
    else {
      continue;
    }
  }

}

void main() {
  int arr[] = {1, 2, 0, 4, 3, 0, 5, 0}, size = sizeof(arr) / sizeof (int);

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  pushZerosToEnd(arr, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}
