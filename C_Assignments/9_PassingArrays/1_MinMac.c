#include<stdio.h>
int minNumber(int *);
int maxNumber(int *);
void main(){
   int arr[]={1,2,-3,4,5,6};
   printf("%d\n",minNumber(arr));
   printf("%d",maxNumber(arr));
}

int minNumber(int *arr){
   int min=arr[0];
   for(int i=0;i<6;i++){
    if(arr[i]<min){
        min=arr[i];
      
    }
   }
   return min;
}


int maxNumber(int *arr){
   int max=arr[0];
   for(int i=0;i<6;i++){
    if(arr[i]>max){
        max=arr[i];
        
    }
   }
   return max;
}