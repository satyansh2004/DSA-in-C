#include <stdio.h>

void swapKth(int arr[], int k, int size_arr)
{
    int *ptr_start = arr;
    int *ptr_end = arr;

    int index = 0;

    while (index != size_arr - 1)
    {
        index++;
        ptr_end++;
    }

    for (int i = 0; i < k - 1; i++)
    {
        ptr_start++;
        ptr_end--;
    }

    int temp = *ptr_start;
    *ptr_start = *ptr_end;
    *ptr_end = temp;
}

void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}, k = 3, size = sizeof(arr) / sizeof(int);
    swapKth(arr, k, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}