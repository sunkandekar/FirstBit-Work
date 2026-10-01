#include<stdio.h>
char *mystrcpy(char *,char *);
void main(){
 char str1[100]="Sunny Kandekar";
 char str2[100];
 mystrcpy(str2,str1);
 printf("%s",str2);
}

char *mystrcpy(char *str1,char *str2){
    int i=0;
    while(str2[i]!='\0'){
        str1[i]=str2[i];
        i++;
    }
    str1[i]='\0';
    return str1;
}