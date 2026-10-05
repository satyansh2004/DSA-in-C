#include <stdio.h>

int largest(int arr[], int n) {
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

void main() {

    int arr[] = {1, 8, 7, 56, 90};
    printf("%d", largest(arr, 5));
}