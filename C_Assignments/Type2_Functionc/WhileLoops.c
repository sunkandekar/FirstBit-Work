#include <stdio.h>


void printNumbers(int n)
{
    int i;

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    printf("\n");
}



void printTable(int n)
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", n * i);
    }

    printf("\n");
}



void sumOfRange(int start, int end)
{
    int i, sum = 0;

    for (i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);
}

void checkPrime(int n)
{
    int i, isPrime = 1;

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



void checkArmstrong(int n)
{
    int original, remainder, sum = 0;

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


void checkPerfect(int n)
{
    int i, sum = 0;

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


void factorial(int n)
{
    int i;
    long long fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %lld\n", fact);
}



void checkStrong(int n)
{
    int original, remainder;
    int sum = 0;
    int i, fact;

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



void checkPalindrome(int n)
{
    int original, remainder, reverse = 0;

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


void sumFirstLastDigit(int n)
{
    int first, last, sum;
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
    int n, start, end;

    
    // n = 10;
    // printNumbers(n);

   
    // n = 5;
    // printTable(n);

    
    // start = 1;
    // end = 5;
    // sumOfRange(start, end);

    
    // n = 7;
    // checkPrime(n);

    
    // n = 153;
    // checkArmstrong(n);

    
    // n = 28;
    // checkPerfect(n);

    // n = 5;
    // factorial(n);

    
    // n = 145;
    // checkStrong(n);

    // n = 121;
    // checkPalindrome(n);

    n = 12345;
    sumFirstLastDigit(n);

    return 0;
}