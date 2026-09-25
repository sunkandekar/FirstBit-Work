#include <stdio.h>

int main() {
    int n = 82128;
    int r=n%10;
    int first;
    for(int i=n;i>0;i=i/10){
       first=i;
    }
    int result=r+first;
    printf("Sum = %d",result);
    return 0;
}