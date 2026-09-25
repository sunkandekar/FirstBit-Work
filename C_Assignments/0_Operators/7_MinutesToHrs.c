#include<stdio.h>
void main(){
  int minutes=129;
  int hours=minutes/60;
  int remaining_minutes=minutes%60;
  printf("After Converting Minutes in Hours and minutes %d hours and %d minutes",hours,remaining_minutes);
}