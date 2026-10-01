#include<stdio.h>
char *mystrncat(char *, char *, int);
void main(){
 char str1[100] = "Sunny Kandekar";
    char str2[100] = "Sunny Kandekar";
    int n=50;
    printf("%s",mystrncat(str1,str2,n));
}

char *mystrncat(char *str1, char *str2, int n)
{
    int i = 0;
    int j = 0;

    while (str1[i] != '\0')
    {
        i++;
    }

    while (str2[j] != '\0' && j < n)
    {
        str1[i] = str2[j];

        i++;
        j++;
    }

    str1[i] = '\0';

    return str1;
}