#include <stdio.h>

int printArmstrong()
{
    int n, i, temp, digit, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Armstrong numbers: ");

    for (i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;

        for (; temp > 0; temp = temp / 10)
        {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}


int printPrime()
{
    int n, i, j, isPrime;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers: ");

    for (i = 2; i <= n; i++)
    {
        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}



int printPerfect()
{
    int n, i, j, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Perfect numbers: ");

    for (i = 1; i <= n; i++)
    {
        sum = 0;

        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}


int printStrong()
{
    int n, i, j;
    int temp, digit;
    int sum, fact;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Strong numbers: ");

    for (i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;

        for (; temp > 0; temp = temp / 10)
        {
            digit = temp % 10;

            fact = 1;

            for (j = 1; j <= digit; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact;
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}



int menuProgram()
{
    int choice, n;
    int i, digit;
    int reverse, sum;
    int isPrime;

    printf("\nEnter number: ");
    scanf("%d", &n);

    printf("\n");
    printf("1. Even or Odd\n");
    printf("2. Prime or Not\n");
    printf("3. Palindrome or Not\n");
    printf("4. Positive, Negative or Zero\n");
    printf("5. Reverse Number\n");
    printf("6. Sum of Digits\n");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:

            if (n % 2 == 0)
                return 1;
            else
                return 0;


        case 2:

            isPrime = 1;

            if (n <= 1)
                isPrime = 0;

            for (i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            return isPrime;


        case 3:

            reverse = 0;

            for (i = n; i > 0; i = i / 10)
            {
                digit = i % 10;
                reverse = reverse * 10 + digit;
            }

            if (reverse == n)
                return 1;
            else
                return 0;


        case 4:

            if (n > 0)
                return 1;
            else if (n < 0)
                return -1;
            else
                return 0;


        case 5:

            reverse = 0;

            for (i = n; i > 0; i = i / 10)
            {
                digit = i % 10;
                reverse = reverse * 10 + digit;
            }

            return reverse;


        case 6:

            sum = 0;

            for (i = n; i > 0; i = i / 10)
            {
                digit = i % 10;
                sum = sum + digit;
            }

            return sum;


        default:
            return -999;
    }
}


int main()
{
    int result;

    // printArmstrong();

    // printPrime();

    // printPerfect();

    // printStrong();

    result = menuProgram();

    printf("Returned value = %d\n", result);

    return 0;
}