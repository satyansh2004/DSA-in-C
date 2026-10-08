#include <stdio.h>
#include <stdbool.h>

bool isSubset(int a[], int b[], int size_a, int size_b)
{

    bool flag = true;

    for (int i = 0; i < size_b; i++)
    {
        bool new_flag = true;
        for (int j = 0; j < size_a; j++)
        {
            if (b[i] == a[j])
            {
                new_flag = true;
                break;
            }

            new_flag = false;
        }

        if (new_flag == false)
        {
            flag = false;
            break;
        }
    }

    return flag;
}

int main()
{
    int a[] = {1, 2, 3, 4, 4, 5, 6}, b[] = {1, 2, 4};
    int size_a, size_b;

    size_a = sizeof(a) / sizeof(int);
    size_b = sizeof(b) / sizeof(int);

    printf("%B", isSubset(a, b, size_a, size_b));
    return 0;
}