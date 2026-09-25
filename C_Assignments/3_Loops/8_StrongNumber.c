#include<stdio.h>
int main(){
    int n=145;
    int remainder;
    int newNumber=n;

    int sum=0;
    while(n>0){
       remainder=n%10;
       int fact=1;
       int i=1;
       
       while(i<=remainder){
          fact*=i;
          i++;
       }
       sum=sum+fact;
       n/=10;
    }

    if(sum==newNumber){
        printf("Strong");
    }else{
        printf("Not");
    }
    return 0;
}