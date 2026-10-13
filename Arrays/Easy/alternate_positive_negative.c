#include <stdio.h>
void rearrange(int arr[], int size) {
  int positive_array[size], count_positive = 0, negative_array[size], count_negative = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] >= 0) {
      positive_array[count_positive] = arr[i];
      count_positive++;
    }
    else {
      negative_array[count_negative] = arr[i];
      count_negative++;
    }
  }

  int rearrange_count = 0, rearrange_count_negative = 0;
  for (int i = 0; i < size; i++) {
    if (i % 2 == 0) {
      if (rearrange_count <= count_positive) {
        arr[i] = positive_array[rearrange_count];
        rearrange_count++;
      }
    }
    else {
      if (rearrange_count_negative <= count_negative) {
        arr[i] = negative_array[rearrange_count_negative];
        rearrange_count_negative++;
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
