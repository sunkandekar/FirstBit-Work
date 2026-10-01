#include <stdio.h>
int mystrcmp(char *, char *);
void main()
{
    char str1[100] = "Sunny Kandekar";
    char str2[100] = "Sunny Kandekar";

    
    printf("%d",mystrcmp(str1,str2));
}

int mystrcmp(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
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