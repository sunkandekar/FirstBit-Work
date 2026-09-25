#include<stdio.h>
void main(){
    int number;
    printf("Enter an number: ");
    scanf("%d",&number);

    if(number>0){
        printf("Positive Number");
    }else if(number<0){
        printf("Negative Number");
    }else{
        printf("Neutral");
    }
}