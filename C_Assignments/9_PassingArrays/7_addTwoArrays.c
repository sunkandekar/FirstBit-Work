#include <stdio.h>

void addArrays(int *, int *, int *);

void main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {10, 20, 30, 40, 50};
    int crr[5];

    addArrays(arr, brr, crr);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", crr[i]);
    }
}

void addArrays(int *arr, int *brr, int *crr)
{
    for (int i = 0; i < 5; i++)
    {
        crr[i] = arr[i] + brr[i];
    }
}