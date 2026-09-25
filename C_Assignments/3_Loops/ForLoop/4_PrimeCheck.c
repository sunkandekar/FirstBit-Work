#include<stdio.h>
int main(){
    int n=5;
    int flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(!flag){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}