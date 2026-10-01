#include<stdio.h>
char *mystrchr(char * ,char );
void main(){
  char str1[100] = "Sunny Kandekar";
  char target='n';
  printf("%s",mystrchr(str1,target));
}

char *mystrchr(char * str,char ch){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==ch){
            return &str[i];
        }
        i++;
    }
    return NULL;
}