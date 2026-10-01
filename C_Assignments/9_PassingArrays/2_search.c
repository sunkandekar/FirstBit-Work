#include<stdio.h>
int search(int *,int);

void main(){
   int arr[]={1,2,-3,4,5,6};
   
   int target=4;
   printf("%d",search(arr,target));
}

int search(int *arr,int target){
  for(int i=0;i<6;i++){
    if(arr[i]==target){
        return i;
    }
  }
}