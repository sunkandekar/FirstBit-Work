#include <stdio.h>

int main()
{
    int n;
    printf("Enter Maximum Number : ");
    scanf("%d", &n);

    printf("Prime Numbers are: ");
    for (int i = 2; i <= n; i++)
    {
        int flag = 1;
        if (n % i == 0)
        {
            flag = 0;
            break;
        }

        if (flag == 1)
        {
            printf("%d", n);
        }
    }
    return 0;
}