#include<stdio.h>
void main(){
   int a=4;
   int b=2;
   int c=8;

   if(a>b && a>c){
    printf("%d is greatest",a);
   }
   else if(b>a && b>c){
    printf("%d is greatest",b);
   }
   else if(c>a && c>b){
    printf("%d is greatest",c);
   }
   else{
    printf("All are equal");
   }
}