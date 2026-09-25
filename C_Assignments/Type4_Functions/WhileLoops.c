#include <stdio.h>

int printNumbers(int n)
{
    int i;

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}



int printTable(int n)
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", n * i);
    }

    printf("\n");

    return 0;
}


int sumOfRange(int start, int end)
{
    int i;
    int sum = 0;

    for (i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    return sum;
}


int checkPrime(int n)
{
    int i;

    if (n <= 1)
    {
        return 0;
    }

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}



int checkArmstrong(int n)
{
    int original;
    int remainder;
    int sum = 0;

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

    return 0;
}



int checkPerfect(int n)
{
    int i;
    int sum = 0;

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

    return 0;
}




long long factorial(int n)
{
    int i;
    long long fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}



int checkStrong(int n)
{
    int original;
    int remainder;
    int sum = 0;

    int i;
    int fact;

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

    return 0;
}



int checkPalindrome(int n)
{
    int original;
    int remainder;
    int reverse = 0;

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

    return 0;
}




int sumFirstLastDigit(int n)
{
    int first;
    int last;

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
    int n;
    int result;
    long fact;


    // 1. Print numbers
    // n = 10;
    // printNumbers(n);


    // 2
    // n = 5;
    // printTable(n);


    // 3
    // result = sumOfRange(1, 5);

    // printf("Sum = %d\n", result);


    // 4
    // n = 7;

    // result = checkPrime(n);

    // if (result == 1)
    // {
    //     printf("Prime\n");
    // }
    // else
    // {
    //     printf("Not Prime\n");
    // }


    // 5
    // n = 153;

    // result = checkArmstrong(n);

    // if (result == 1)
    // {
    //     printf("Armstrong\n");
    // }
    // else
    // {
    //     printf("Not Armstrong\n");
    // }


    // 6
    // n = 28;

    // result = checkPerfect(n);

    // if (result == 1)
    // {
    //     printf("Perfect\n");
    // }
    // else
    // {
    //     printf("Not Perfect\n");
    // }


    // 7. Factorial
    // n = 5;

    // fact = factorial(n);

    // printf("Factorial = %lld\n", fact);


    // 8
    // n = 145;

    // result = checkStrong(n);

    // if (result == 1)
    // {
    //     printf("Strong\n");
    // }
    // else
    // {
    //     printf("Not Strong\n");
    // }


    // 9
    // n = 121;
    // result = checkPalindrome(n);
    // if (result == 1)
    // {
    //     printf("Palindrome\n");
    // }
    // else
    // {
    //     printf("Not Palindrome\n");
    // }


    // 10.
    n = 12345;
    result = sumFirstLastDigit(n);
    printf("Sum = %d\n", result);

    return 0;
}