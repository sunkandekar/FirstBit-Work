#include<stdio.h>
int main(){
    int num=484;
    int remainder1, remainder2,remainder3,reverse,quetiont;
    remainder1=num%10;
    quetiont=num/10;
    remainder2=quetiont%10;
    remainder3=quetiont/10;
    reverse=(remainder1*100)+(remainder2*10)+remainder3;
   
    if(num==reverse){
        printf("Number is palindrome");
    }else{
        printf("Number is not palindrome");
    }
return 0;
}