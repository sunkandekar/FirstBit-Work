#include<stdio.h>
int main(){
    int n=5;
    int i=1;
    int fact=1;
    while(i<=n){
      fact=fact*i;
      i++;
    }
    printf("Factorial: %d" ,fact);
    return 0;
}