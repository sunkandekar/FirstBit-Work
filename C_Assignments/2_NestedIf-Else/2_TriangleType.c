#include<stdio.h>
void main(){
    int side1,side2,side3;
    printf("Enter first Side: ");
    scanf("%d",&side1);
    printf("Enter Second Side: ");
    scanf("%d",&side2);
    printf("Enter Third Side: ");
    scanf("%d",&side3);

      if(side1==side2 && side1==side3){
        printf("It is Equilateral triangle");
    }else if(side1!=side2 && side2!=side3 && side1!=side3){
        printf("Scalene triangle");
    }else{
        printf("Isosceles triangle");
    }
}