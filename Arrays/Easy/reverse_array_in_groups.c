#include <stdio.h>

void reverseInGroups(int arr[], int k, int size_array)
{
    if (k > size_array)
    {
        int *ptr_start = arr;
        int *ptr_end = arr;

        int i = 0;
        while (i != size_array - 1)
        {
            i++;
            ptr_end++;
        }

        for (int i = 0; i < size_array / 2; i++)
        {
            int temp = *ptr_end;
            *ptr_end = *ptr_start;
            *ptr_start = temp;

            ptr_start++;
            ptr_end--;
        }
    }
    else
    {
        int sub_arr_size = k;
        int start_array = 0;

        for (int i = 0; i < 2; i++)
        {
            int *ptr_start = &arr[start_array];
            int *ptr_end = &arr[start_array];

            int count = 0;
            while (count != sub_arr_size - 1)
            {
                ptr_end++;
                count++;
            }

            for (int j = start_array; j < sub_arr_size / 2; j++)
            {
                int temp = *ptr_end;
                *ptr_end = *ptr_start;
                *ptr_start = temp;

                ptr_start++;
                ptr_end--;
                start_array++;
            }
            sub_arr_size = size_array - k;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int k = 3;
    int size_arr = sizeof(arr) / sizeof(int);

    reverseInGroups(arr, k, size_arr);
    for (int i = 0; i < size_arr; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}