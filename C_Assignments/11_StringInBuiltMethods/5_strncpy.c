#include <stdio.h>

char *mystrncpy(char *, char *, int);

void main()
{
    char str1[100] = "Sunny Kandekar";
    char str2[100] = "Sunny Kandekar";

    int n = 4;

    printf("%s", mystrncpy(str1, str2, n));
}

char *mystrncpy(char *destination, char *source, int n)
{
    int i = 0;

    while (i < n && source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    while (i < n)
    {
        destination[i] = '\0';
        i++;
    }

    return destination;
}