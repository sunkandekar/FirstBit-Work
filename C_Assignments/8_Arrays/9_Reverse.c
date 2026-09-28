#include <stdio.h>
void main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int mid = size / 2;

    int index = 0;

    while (index < mid)
    {
        int temp = arr[index];
        arr[index] = arr[size - 1 - index];
        arr[size - 1 - index] = temp;
        index++;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}