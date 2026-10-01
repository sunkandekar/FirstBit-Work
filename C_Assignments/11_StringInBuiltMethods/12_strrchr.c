#include<stdio.h>
char *mystrrchr(char *,char);

void main(){
char str1[100] = "Sunny Kandekar";
char target='n';
printf("%s",mystrrchr(str1,target));
}

char *mystrrchr(char *str,char target){
    int i=0;
   char *result=NULL;
    while(str[i]!='\0'){
if(str[i]==target){
    result=&str[i];
}
i++;
    }
    return result;
}