#include <stdio.h>
int sum(int *);

void main()
{
    int arr[] = {1, 2, -3, 4, 5, 6};

    int target = 4;
    printf("%d", sum(arr));
}

int sum(int *arr)
{
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum += arr[i];
    }
    return sum;
}