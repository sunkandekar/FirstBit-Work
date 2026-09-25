#include <stdio.h>

void printArmstrong()
{
    int n, i;
    int temp, digit, sum;

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
}


void printPrime()
{
    int n, i, j;
    int isPrime;

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
}



void printPerfect()
{
    int n, i, j;
    int sum;

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
}



void printStrong()
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
}


void menuProgram()
{
    int choice, n;
    int i, digit, reverse, sum;
    int isPrime;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    printf("\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Sum of Digits\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:

            if (n % 2 == 0)
                printf("Even\n");
            else
                printf("Odd\n");

            break;


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

            if (isPrime == 1)
                printf("Prime\n");
            else
                printf("Not Prime\n");

            break;


        case 3:

            reverse = 0;

            for (i = n; i > 0; i = i / 10)
            {
                digit = i % 10;
                reverse = reverse * 10 + digit;
            }

            if (reverse == n)
                printf("Palindrome\n");
            else
                printf("Not Palindrome\n");

            break;


        case 4:

            if (n > 0)
                printf("Positive\n");
            else if (n < 0)
                printf("Negative\n");
            else
                printf("Zero\n");

            break;


        case 5:

            reverse = 0;

            for (i = n; i > 0; i = i / 10)
            {
                digit = i % 10;
                reverse = reverse * 10 + digit;
            }

            printf("Reverse = %d\n", reverse);

            break;


        case 6:

            sum = 0;

            for (i = n; i > 0; i = i / 10)
            {
                digit = i % 10;
                sum = sum + digit;
            }

            printf("Sum of digits = %d\n", sum);

            break;


        default:
            printf("Invalid choice\n");
    }
}


int main()
{
    printArmstrong();

    printPrime();

    printPerfect();

    printStrong();

    menuProgram();

    return 0;
}