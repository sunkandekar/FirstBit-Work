#include<stdio.h>
void main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Armstrong numbers: ");

    for (int num = 1; num <= n; num++) {
        int temp = num;
        int digits = 0;
        int sum = 0;

        
        for (int t = temp; t > 0; t = t / 10) {
            digits++;
        }

        // Calculate Armstrong sum
        for (int t = temp; t > 0; t = t / 10) {
            int digit = t % 10;
            int power = 1;

            for (int i = 1; i <= digits; i++) {
                power = power * digit;
            }

            sum = sum + power;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }
}