#include <stdio.h>
int main() {
    int n=6;
    int i=1;
    int sum=0;
    while(i<n){
        if(n%i==0){
           sum=sum+i;
        }
        i++;
    }

    if(sum==n){
        printf("Perfect");
    }
  
    return 0;
}