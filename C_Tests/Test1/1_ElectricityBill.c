#include<stdio.h>
void main(){
    int units;
    int amountToPay=1;
    printf("Enter Units Of Electricity You have used: ");
    scanf("%d",&units);

    if(units>1 && units<=50){
        amountToPay=units*30;
    }else if(units>50 && units<=150){
        amountToPay=units*40;
    }else{
        amountToPay=units*50;
    }

    printf("You need to pay Total amount: rs %d  " ,amountToPay);
}