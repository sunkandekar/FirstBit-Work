#include <stdio.h>
char* mystrnstr(char *, char *, int);
void main()
{
    char str1[100] = "Sunny Kandekar";
    char str2[100] = "Sunny Kandekar";
    int n=50;
    printf("%s",mystrnstr(str1,str2,n));
}

char *mystrnstr(char *str, char *sub, int n)
{
    int i;
    int j;

    if (sub[0] == '\0')
    {
        return str;
    }

    for (i = 0; i < n && str[i] != '\0'; i++)
    {
        j = 0;

        while (str[i + j] != '\0' &&
               sub[j] != '\0' &&
               i + j < n &&
               str[i + j] == sub[j])
        {
            j++;
        }

        if (sub[j] == '\0')
        {
            return &str[i];
        }
    }

    return NULL;
}