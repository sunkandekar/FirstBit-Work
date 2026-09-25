#include<stdio.h>
//void sum();
//void triangle();
//void greatest();
//void marksCalci();
void priceCalci();

int main(){
    //sum();
    //triangle();
    //greatest();
    //marksCalci();
    priceCalci();
    return 0;
}

//1
// void sum(){
// int a,b;
//    char operator;
//    printf("Enter first Number: ");
//    scanf("%d",&a);
//    printf("Enter second Number: ");
//    scanf("%d",&b);
//    printf("Enter Operator: ");
//    scanf(" %c",&operator);

//    if(operator=='+'){
//     printf("The sum is: %d", a+b);
//    }
//    else if(operator=='-'){
//     printf("The subtraction is: %d", a-b);
//    }
//    else if(operator=='*'){
//     printf("The product is: %d", a*b);
//    }
//    else if(operator=='/'){
//     printf("The quetiont is: %d", a/b);
//    }
//    else if(operator=='%'){
//     printf("The remainder is: %d", a%b);
//    }
//    else{
//     printf("Invalid opeartor");
//    }
// }

//2
// void triangle(){
//     int side1,side2,side3;
//     printf("Enter first Side: ");
//     scanf("%d",&side1);
//     printf("Enter Second Side: ");
//     scanf("%d",&side2);
//     printf("Enter Third Side: ");
//     scanf("%d",&side3);

//       if(side1==side2 && side1==side3){
//         printf("It is Equilateral triangle");
//     }else if(side1!=side2 && side2!=side3 && side1!=side3){
//         printf("Scalene triangle");
//     }else{
//         printf("Isosceles triangle");
//     }
// }

//3
// void greatest(){
//    int a=4;
//    int b=2;
//    int c=8;

//    if(a>b && a>c){
//     printf("%d is greatest",a);
//    }
//    else if(b>a && b>c){
//     printf("%d is greatest",b);
//    }
//    else if(c>a && c>b){
//     printf("%d is greatest",c);
//    }
//    else{
//     printf("All are equal");
//    }
// }


//4
// void marksCalci(){
//     int marks=59;
//     if(marks>75){
//         printf("Distinction");
//     }else if(marks>65){
//         printf("First Class");
//     }else if(marks>55){
//         printf("Second Class");
//     }else if(marks>=40){
//         printf("Pass Class");
//     }else{
//         printf("Fail");
//     }
// }

//5
void priceCalci(){
    int price;
    char check;

    printf("Enter Price of Your Cart: ");
    scanf("%d", &price);

    printf("Are You Student (y/n): ");
    scanf(" %c", &check);

    if (check == 'y' || check == 'Y') {
        if (price > 500) {
            printf("20 percent Discount is Applied");
        } else {
            printf("10 percent Discount is Applied");
        }
    } else {
        if (price > 600) {
            printf("15 percent Discount is Applied");
        } else {
            printf("No Discount Can be Applied");
        }
    }
}