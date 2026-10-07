#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPalinArray(int arr[], int n)
{
    int flag = false;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i], expo = 0;
        int rev_num = 0;

        while (num != 0)
        {
            num = num / 10;
            expo++;
        }
        expo--;

        num = arr[i];

        while (num != 0)
        {
            int exp = pow(10, expo);
            rev_num = rev_num + num % 10 * exp;
            num = num / 10;
            expo--;
        }
        if (arr[i] == rev_num)
        {
            flag = true;
        }
        else
        {
            flag = false;
        }
    }

    return flag;
}

void main()
{

    int arr[] = {121, 131, 20};
    int size = sizeof(arr) / sizeof(int);

    printf("Result: %d", isPalinArray(arr, size));
}