#include <stdio.h>

int main() {
    int n = 12121;
    int temp=n;
    int r;
    int reversed=0;
    for(int i=n;i>0;i=i/10){
        r=i%10;
        reversed=reversed*10+r;
    }
    if(temp==reversed){
        printf("Palinderome");
    }else{
        printf("Not");
    }
    return 0;
}