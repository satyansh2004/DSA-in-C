#include <stdio.h>

int new_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int *leaders(int *arr, int n, int *returnSize)
{

    int size = 0, index = 0;
    int non_arr[20];

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                non_arr[index] = arr[i];
                index++;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < index; j++)
        {
            if (arr[i] == non_arr[j]) {
                break;
            }
            else {
                printf("%d\n", arr[i]);
            }
        }
    }

    *returnSize = size;

    return new_arr;
}

void main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size_arr = sizeof(arr) / sizeof(int);
    int return_size = 0;

    //int *result = 
    leaders(arr, size_arr, &return_size);

    // for (int i = 0; i < return_size; i++)
    // {
    //     printf("%d ", *result);
    //     result++;
    // }
}