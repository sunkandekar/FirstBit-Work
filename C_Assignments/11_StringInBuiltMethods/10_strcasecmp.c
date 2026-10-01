#include <stdio.h>

int mystrcasecmp(char *, char *);
void main()
{
    char str1[100] = "Sunny Kandekar";
    char str2[100] = "Sunny Kandekar";

    printf("%d", mystrcasecmp(str1, str2));
}

int mystrcasecmp(char *str1, char *str2)
{
    int i = 0;
    char ch1;
    char ch2;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
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

        if (ch1 > ch2)
        {
            return 1;
        }
        if (ch1 < ch2)
        {
            return -1;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 0;
    }

    if (str1[i] == '\0')
    {
        return -1;
    }

    return 1;
}