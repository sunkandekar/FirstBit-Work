#include<stdio.h>
void main(){
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};
    int arr3[]={7,8,9};

    int arr4[9];
    int index=0;

    for(int i=0;i<3;i++){
       arr4[index]=arr1[i];
       index++;
    }
    
    for(int j=0;j<3;j++){
        arr4[index]=arr2[j];
        index++;
    }

    for(int k=0;k<3;k++){
        arr4[index]=arr3[k];
        index++;
    }

    for(int i=0;i<9;i++){
        printf("%d\t",arr4[i]);
    }
}