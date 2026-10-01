#include <stdio.h>
void alternate(int *);

void main()
{
    int arr[] = {1, 2, -3, 4, 5, 6};
    alternate(arr);
}

void alternate(int *arr)
{
    for(int i=0;i<6;i=i+2){
        printf("%d\n",arr[i]);
    }
}