#include <stdio.h>
#include <stdlib.h>

int *leaders(int *arr, int n, int *returnSize)
{
    int *new_arr = malloc(*returnSize * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        int num = arr[i], flag = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                flag = 0;
                goto next;
            }

            num = arr[i];
        }

    next:

        if (flag != 0)
        {
            new_arr[*returnSize] = num;
            (*returnSize)++;
        }
    }

    return new_arr;
}

void main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size_arr = sizeof(arr) / sizeof(int);
    int return_size = 0;

    int *result = leaders(arr, size_arr, &return_size);

    int *temp = result;
    for (int i = 0; i < return_size; i++)
    {
        printf("%d ", *result);
        result++;
    }


    free(temp);
}