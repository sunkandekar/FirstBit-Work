#include<stdio.h>
char *mystrstr(char *, char *);
void main(){
   char str1[100]="Sunny Kandekar";
   char str2[100]="ny";
   printf("%s",mystrstr(str1,str2));
}

char *mystrstr(char *str, char *sub)
{
    int i;
    int j;

    if (sub[0] == '\0')
    {
        return str;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while (str[i + j] == sub[j] && sub[j] != '\0')
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