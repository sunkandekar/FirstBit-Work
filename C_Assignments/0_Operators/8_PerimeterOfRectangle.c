#include<stdio.h>
void main(){
   int length,breadth;
   printf("Enter Length: \n");
   scanf("%d",&length); 
   printf("Enter Breadth: \n");    
   scanf("%d",&breadth);
   printf("Perimeter of Rectangle is : %d",2*(length+breadth));
}