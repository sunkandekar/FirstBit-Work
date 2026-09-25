#include <stdio.h>
int main() {
    int fact=1;
    int n=5;
    int i=2;
    while(i<=n){
        fact*=i;
        i++;
    }
  printf("%d",fact);
    return 0;
}