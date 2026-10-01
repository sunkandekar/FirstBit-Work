#include<stdio.h>
int mystelen(char *);
void main(){
    char str1[100]="Sunny Kandekar";
    printf("%d",mystelen(str1));
}

int mystelen(char *str1){
    int i=0;
    while(str1[i]!='\0'){
        i++;
    }
    return i;
}