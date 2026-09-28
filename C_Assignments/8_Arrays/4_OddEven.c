#include<stdio.h>
void odd(int[],int);
void even(int[],int);

void main(){
    int arr[]={1,2,3,4,5,6,7,89,99,108};
    int size=sizeof(arr)/sizeof(arr[0]);
    odd(arr,size);
    even(arr,size);
}

void odd(int arr[],int n){
   for(int i=0;i<n;i++){
     if(arr[i]%2!=0){
        printf("%d\n",arr[i]);
     }
   }
}
void even(int arr[],int n){
   for(int i=0;i<n;i++){
     if(arr[i]%2==0){
        printf("%d\n",arr[i]);
     }
   }
}


