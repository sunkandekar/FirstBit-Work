#include <stdio.h>
int main() {
    int n=19,i=2;
    int flag=0;

    while(i<n){
      if(n%i==0){
        flag=1;
        break;
      }
      i++;
    }
    if(!flag){
        printf("Prime Number");
    }else{
        printf("Not Prime Number");
    }

    return 0;
}