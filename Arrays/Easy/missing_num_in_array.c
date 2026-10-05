#include <stdio.h>

int missingNum(int *arr, int size)
{
    int sum = 0, index_sum = 1;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    for (int i = 1; i <= size; i++)
    {
        index_sum = index_sum + (i + 1);
    }

    return index_sum - sum;
}

void main()
{
    int arr[] = {2, 1, 3};
    int result = missingNum(arr, sizeof(arr) / sizeof(int));

    printf("Result: %d", result);
}