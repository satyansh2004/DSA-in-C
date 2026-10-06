#include <stdio.h>

void rotate(int arr[], int n)
{
    int temp = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    rotate(arr, size);

    return 0;
}