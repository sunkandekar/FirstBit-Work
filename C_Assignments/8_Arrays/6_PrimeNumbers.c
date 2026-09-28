#include <stdio.h>
void main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        int n = 2;
        while (n < arr[i])
        {
            if (arr[i] % n == 0)
            {
                flag = 1;
                break;
            }
            n++;
        }
        if (!flag && arr[i]>1)
        {
            printf("%d\t", arr[i]);
        }
    }
}