#include <stdio.h>

int twoSum(int arr[], int size, int k) {

  for (int i = 0; i < size; i++) {
    for (int j = i+1; j < size; j++) {
      if (arr[i] + arr[j] == k) {
        return 1;
      }
    }
  }

  return 0;

}

void main() {
  int arr[] = {0, -1, 2, -3, 1}, size = sizeof(arr) / sizeof(int), target = 200;
  printf("%d", twoSum(arr, size, target));
}
