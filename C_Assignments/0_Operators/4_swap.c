#include<stdio.h>
void main(){
    int a=4;
    int b=8;
    int c=a;
    a=b;
    b=c;
    printf("After Swapping The numbers are a=%d and b=%d",a,b);
}