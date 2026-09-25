#include <stdio.h>


// 1. Print Armstrong numbers from 1 to n
int printArmstrong(int n)
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

    return 0;
}


// 2. Print prime numbers from 1 to n
int printPrime(int n)
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

    return 0;
}


// 3. Print perfect numbers from 1 to n
int printPerfect(int n)
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

    return 0;
}


// 4. Print strong numbers from 1 to n
int printStrong(int n)
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

    return 0;
}


// 5. Menu Driven Program
int menuProgram(int n, int choice)
{
    int i, digit;
    int reverse, sum;
    int isPrime;

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
    int n;
    int choice;
    int result;


    // 1. Armstrong
    // n = 500;
    // printArmstrong(n);


    // 2. Prime
    // n = 50;
    // printPrime(n);


    // 3. Perfect
    // n = 1000;
    // printPerfect(n);


   
    // n = 1000;
    // printStrong(n);
   

    printf("\nEnter a number: ");
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

    result = menuProgram(n, choice);


  
    if (choice == 1)
    {
        if (result == 1)
            printf("Even\n");
        else
            printf("Odd\n");
    }
    else if (choice == 2)
    {
        if (result == 1)
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }
    else if (choice == 3)
    {
        if (result == 1)
            printf("Palindrome\n");
        else
            printf("Not Palindrome\n");
    }
    else if (choice == 4)
    {
        if (result == 1)
            printf("Positive\n");
        else if (result == -1)
            printf("Negative\n");
        else
            printf("Zero\n");
    }
    else if (choice == 5)
    {
        printf("Reverse = %d\n", result);
    }
    else if (choice == 6)
    {
        printf("Sum of digits = %d\n", result);
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}