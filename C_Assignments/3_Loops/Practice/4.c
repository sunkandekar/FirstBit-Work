#include <stdio.h>
int main() {
    int n=19;
    int i=2;
    int flag=0;
    while(i<n) {
        if(n%i==0){
            flag=1;
        }
        i++;
    }
    if(!flag){
        printf("Prime");
    }else{
        printf("Not");
    }
  
    return 0;
}