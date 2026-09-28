#include<stdio.h>
int search(int[],int);
void main(){
    int arr[]={1,2,3,4,5,6,7,89,99,108};
    int target=4;

    int result=search(arr,target);
    printf("%d",result);
}

int search(int arr[],int target){
     for(int i=0;i<10;i++){
        if(arr[i]==target){
            return i;
        }
     }
}