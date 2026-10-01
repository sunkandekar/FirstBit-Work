#include <stdio.h>
void odd(int *);
void even(int *);

void main()
{
    int arr[] = {1, 2, -3, 4, 5, 6};
    odd(arr);

    even(arr);
}

void odd(int *arr)
{

    for (int i = 0; i < 6; i++)
    {
       if(arr[i]%2!=0){
        printf("Odd = %d\n",arr[i]);
       }
    }
    
}
void even(int *arr)
{

    for (int i = 0; i < 6; i++)
    {
       if(arr[i]%2==0){
        printf("even = %d\n",arr[i]);
       }
    }
    
}