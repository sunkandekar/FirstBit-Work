#include <stdio.h>

int sum(int arr[], int n);

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 89, 99, 108};
    int result = sum(arr, sizeof(arr) / sizeof(arr[0]));

    printf("%d", result);
    return 0;
}

int sum(int arr[], int n){
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    return total;
}