#include<stdio.h>
int main(){
    int n=121;
    int sum=0;
    int reverse=n;
    while(n>0){
        int remainder=n%10;
        sum=sum*10 +remainder;
        n/=10;
    }
    if(reverse==sum){
        printf("Palindrome");
    }else{
        printf("Not");
    }
    return 0;
}