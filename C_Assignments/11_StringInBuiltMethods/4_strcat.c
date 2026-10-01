#include <stdio.h>
char *mystrcat(char *, char *);
void main()
{
    char str1[100] = "Sunny Kandekar";
    char str2[100] = "Sunny Kandekar";
    
    printf("%s",mystrcat(str1,str2));
}

char *mystrcat(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    while(str1[i]!='\0'){
        i++;
    }
        while(str2[j]!='\0'){
            str1[i]=str2[j];
            i++;
            j++;
        }
        str1[i] = '\0';
        return str1;

}