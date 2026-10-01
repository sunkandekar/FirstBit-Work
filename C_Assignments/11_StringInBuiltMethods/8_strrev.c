#include <stdio.h>
char *mystrrev(char *);
void main()
{
    char str[100] = "SUNNy";
    printf("%s", mystrrev(str));
}

char *mystrrev(char *str)
{
    int i = 0;
    int j = 0;
    char temp;
    while (str[j] != '\0')
    {
        j++;
    }
    j--;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    return str;
}