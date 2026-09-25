#include<stdio.h>
void main(){
   int a,b;
   char operator;
   printf("Enter first Number: ");
   scanf("%d",&a);
   printf("Enter second Number: ");
   scanf("%d",&b);
   printf("Enter Operator: ");
   scanf(" %c",&operator);

   if(operator=='+'){
    printf("The sum is: %d", a+b);
   }
   else if(operator=='-'){
    printf("The subtraction is: %d", a-b);
   }
   else if(operator=='*'){
    printf("The product is: %d", a*b);
   }
   else if(operator=='/'){
    printf("The quetiont is: %d", a/b);
   }
   else if(operator=='%'){
    printf("The remainder is: %d", a%b);
   }
   else{
    printf("Invalid opeartor");
   }
}