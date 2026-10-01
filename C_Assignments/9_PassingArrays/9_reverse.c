#include <stdio.h>

void reverse(int *, int);

void main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    reverse(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

void reverse(int *arr, int n)
{
    int i = 0;
    int j = n - 1;
    int temp;

    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}