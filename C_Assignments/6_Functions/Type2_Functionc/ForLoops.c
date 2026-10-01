#include <stdio.h>

void printArmstrong(int n)
{
    int i, temp, digit, sum;

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



void printPrime(int n)
{
    int i, j, isPrime;

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


void printPerfect(int n)
{
    int i, j, sum;

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



void printStrong(int n)
{
    int i, j;
    int temp, digit;
    int sum, fact;

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


void menuProgram(int n, int choice)
{
    int i, digit;
    int reverse, sum;
    int isPrime;

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
    int n;
    int choice;

    printf("Enter n: ");
    scanf("%d", &n);

    // printArmstrong(n);

    // printPrime(n);

    // printPerfect(n);

    // printStrong(n);


    printf("\nEnter a number for menu: ");
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

    menuProgram(n, choice);

    return 0;
}