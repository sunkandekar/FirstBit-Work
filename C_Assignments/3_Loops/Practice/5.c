#include <stdio.h>
#include<math.h>
int main() {
    int n=1;
    int temp=n;
    int digits=0;
    while(n>0){
        n/=10;
        digits++;
    }
    n=temp;
    int remainder;
    int sum=0;
    while(n>0){
      remainder=n%10;
      sum=sum+pow(remainder,digits);
      n=n/10;
    }
    if(sum==temp){
        printf("Armstrong");
    }else{
        printf("Not");
    }
    return 0;
}