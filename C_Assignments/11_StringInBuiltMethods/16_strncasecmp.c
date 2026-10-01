#include <stdio.h>

int mystrncasecmp(char *, char *, int);
void main()
{
    char str1[100] = "Sunny Kandekar";
    char str2[100] = "Sunny Kandekar";
    int n = 50;
    printf("%d", mystrncasecmp(str1, str2, n));
}

int mystrncasecmp(char *str1, char *str2, int n)
{
    int i = 0;
    char ch1;
    char ch2;

    while (i < n)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            return 0;
        }

        if (str1[i] == '\0')
        {
            return -1;
        }

        if (str2[i] == '\0')
        {
            return 1;
        }

        ch1 = str1[i];
        ch2 = str2[i];

        if (ch1 >= 'A' && ch1 <= 'Z')
        {
            ch1 = ch1 + 32;
        }

        if (ch2 >= 'A' && ch2 <= 'Z')
        {
            ch2 = ch2 + 32;
        }

        if (ch1 < ch2)
        {
            return -1;
        }

        if (ch1 > ch2)
        {
            return 1;
        }

        i++;
    }

    return 0;
}