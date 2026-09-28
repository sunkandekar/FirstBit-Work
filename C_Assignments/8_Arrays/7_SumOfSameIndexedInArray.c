#include <stdio.h>
void main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30, 40, 50};
    int arr3[5];
    int index = 0;
    for (int i = 0, j = 0; i < 5, j < 5; i++, j++)
    {
        arr3[index] = arr1[i] + arr2[j];
        index++;
    }

    for (int j = 0; j < 5; j++)
    {
        printf("%d\t", arr3[j]);
    }
}