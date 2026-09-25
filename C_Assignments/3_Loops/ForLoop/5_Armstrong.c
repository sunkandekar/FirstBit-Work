#include<stdio.h>
#include<math.h>
int main(){
    int n=153;
    int copied=n;
    int remainder;
    int count=0;
    int sum=0;
    for(int i=n;i>0;i=i/10){
        n=n/10;
        count++;
    }

    n=copied;
    for(int i=n;i>0;i=i/10){
        remainder=i%10;
        sum=sum+pow(remainder,count);
    }
    if(copied==sum){
        printf("Armstrong");
    }else{
        printf("Not");
    }
    return 0;
}