#include <stdio.h>

void pushZerosToEnd(int arr[], int size) {

  int zeroes_present = 0;
  
  for (int i = 0; i < size; i++) {
    if (arr[i] == 0) {
      zeroes_present = 1;
      break;
    }
    else {
      zeroes_present = 0;
    }
  }

  if (zeroes_present == 0) {
    return;
  }

  int arr_non_zero[size], count_non_zero = 0;

  
  for (int i = 0; i < size; i++) {
    if (arr[i] != 0) {
      arr_non_zero[count_non_zero] = arr[i];
      count_non_zero++;
    }
}

  int count_non_zero_index = 0;

  for (int i = 0; i < size; i++) {
    if (i < count_non_zero) {
        arr[i] = arr_non_zero[count_non_zero_index];
        count_non_zero_index++;
    }
    else {
      arr[i] = 0;
    }
  }

}

void main() {
  int arr[] = {3, 5, 0, 0, 4}, size = sizeof(arr) / sizeof (int);

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  pushZerosToEnd(arr, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}
