#include <stdio.h>

int printNumbers()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}


int printTable()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", n * i);
    }

    printf("\n");

    return 0;
}


int sumOfRange()
{
    int start, end, i, sum = 0;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    return sum;
}



int checkPrime()
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

    return isPrime;
}


int checkArmstrong()
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
        return 1;
    }
    else
    {
        return 0;
    }
}


int checkPerfect()
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
        return 1;
    }
    else
    {
        return 0;
    }
}



long long factorial()
{
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}



int checkStrong()
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
        return 1;
    }
    else
    {
        return 0;
    }
}


int checkPalindrome()
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
        return 1;
    }
    else
    {
        return 0;
    }
}


int sumFirstLastDigit()
{
    int n, first, last;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }

    first = n;

    return first + last;
}


int main()
{
    int result;
    long fact;

    // 1
    printNumbers();

    // 2
    printTable();

    // 3
    result = sumOfRange();
    printf("Sum = %d\n", result);

    // 4
    result = checkPrime();

    if (result == 1)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    // 5
    result = checkArmstrong();

    if (result == 1)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    // 6
    result = checkPerfect();

    if (result == 1)
        printf("Perfect\n");
    else
        printf("Not Perfect\n");

    // 7
    fact = factorial();
    printf("Factorial = %lld\n", fact);

    // 8
    result = checkStrong();

    if (result == 1)
        printf("Strong\n");
    else
        printf("Not Strong\n");

    // 9
    result = checkPalindrome();

    if (result == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    // 10
    result = sumFirstLastDigit();
    printf("Sum = %d\n", result);

    return 0;
}