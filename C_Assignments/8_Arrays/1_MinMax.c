#include<stdio.h>

int min(int[]);
int max(int[]);
void main(){
    int arr[]={1,2,3,4,5,6,7,89,99,108};
    
   int minNumber=min(arr);
   printf("Min Number = %d",minNumber);
   int maxNumber=max(arr);
   printf("Max Number = %d",maxNumber);
}

int min(int arr[]){
    int minNumber=arr[0];
     for(int i=0;i<10;i++){
        if(arr[i]<minNumber){
            minNumber=arr[i];
        }
     }

    return minNumber;
}
int max(int arr[]){
    int maxNumber=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>maxNumber){
            maxNumber=arr[i];
        }
     }
    return maxNumber;
}
