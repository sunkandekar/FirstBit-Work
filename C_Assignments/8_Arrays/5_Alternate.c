#include<stdio.h>
void alternate(int[],int);


void main(){
    int arr[]={1,2,3,4,5,6,7,89,99,108};
    int size=sizeof(arr)/sizeof(arr[0]);
    alternate(arr,size);
}

void alternate(int arr[],int size){
    for(int i=0;i<size;i=i+2)
        printf("%d\n",arr[i]);
    
}