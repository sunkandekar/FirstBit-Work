#include <stdio.h>

void printNumbers()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    printf("\n");
}


void printTable()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", n * i);
    }

    printf("\n");
}


void sumOfRange()
{
    int start, end, sum = 0, i;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);
}



void checkPrime()
{
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
}



void checkArmstrong()
{
    int n, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        remainder = n % 10;

        sum = sum + (remainder * remainder * remainder);

        n = n / 10;
    }

    if (sum == original)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
}



void checkPerfect()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
    {
        printf("Perfect\n");
    }
    else
    {
        printf("Not Perfect\n");
    }
}


void factorial()
{
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %lld\n", fact);
}



void checkStrong()
{
    int n, original, remainder;
    int sum = 0;
    int i, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        remainder = n % 10;

        fact = 1;

        for (i = 1; i <= remainder; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;

        n = n / 10;
    }

    if (sum == original)
    {
        printf("Strong\n");
    }
    else
    {
        printf("Not Strong\n");
    }
}


void checkPalindrome()
{
    int n, original, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        remainder = n % 10;

        reverse = reverse * 10 + remainder;

        n = n / 10;
    }

    if (reverse == original)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}


void sumFirstLastDigit()
{
    int n, first, last, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }
    first = n;
    sum = first + last;

    printf("Sum = %d\n", sum);
}


int main()
{
    printNumbers();
    printTable();
    sumOfRange();
    checkPrime();
    checkArmstrong();
    checkPerfect();
    factorial();
    checkStrong();
    checkPalindrome();
    sumFirstLastDigit();

    return 0;
}