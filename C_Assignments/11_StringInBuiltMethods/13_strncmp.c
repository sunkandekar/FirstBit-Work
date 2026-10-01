#include <stdio.h>
int mystrncmp(char *, char *, int);
void main()
{
    char str1[100] = "Sunny Kandekar";
    char str2[100] = "Sun Kandekar";
    int n=5;
    printf("%d",mystrncmp(str1,str2,n));
}

int mystrncmp(char *str1, char *str2, int n)
{
    int i = 0;

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

        if (str1[i] < str2[i])
        {
            return -1;
        }

        if (str1[i] > str2[i])
        {
            return 1;
        }

        i++;
    }

    return 0;
}