#include <stdio.h>
#include <stdlib.h>

int *getMinMax(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int *new_arr = malloc(2 * sizeof(int));

    new_arr[0] = arr[0];
    new_arr[1] = arr[size - 1];

    return new_arr;
}

int main()
{

    int arr[] = {28004, 23544, 32504, 29493, 17013, 17850, 18952, 12089, 5126, 10353};
    int size = sizeof(arr) / sizeof(int);

    int *result = getMinMax(arr, size);
    int *temp = result;

    for (int i = 0; i < 2; i++)
    {
        printf("%d ", *result);
        result++;
    }

    free(temp);
}