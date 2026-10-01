#include <stdio.h>

void prime(int *);

void main()
{
    int arr[] = {1, 2, -3, 4, 5, 6,7,11};
    prime(arr);
}

void prime(int *arr)
{
    int flag;

    for (int i = 0; i < 6; i = i + 2)
    {
        int n = arr[i];
        flag = 0;

        for (int j = 2; j < n; j++)
        {
            if (n % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (n > 1 && flag == 0)
        {
            printf("%d ", n);
        }
    }
}