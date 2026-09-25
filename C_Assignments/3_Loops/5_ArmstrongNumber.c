#include<stdio.h>
#include<math.h>
int main(){
    int number=153;
    int originalNumber=number;
    int digits=0;

    while(number>0){
        number/=10;
        digits++;
    }

    printf("Digits: %d\n",digits);
    number=originalNumber;

    int remainder;
    int sum=0;

    while(number>0){
        remainder=number%10;
        sum=sum+pow(remainder,digits);
        number=number/10;
    }
    
    if(originalNumber==sum){
        printf("Armstrong");
    }else{
        printf("Not");
    }
    return 0;
}