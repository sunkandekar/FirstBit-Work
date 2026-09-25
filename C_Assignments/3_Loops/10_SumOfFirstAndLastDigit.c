#include <stdio.h>
int main() {
    int n = 12345;
    int firstDigit;
    int lastDigit;
   
    lastDigit = n % 10;

    while(n >= 10) {
        n = n / 10;
    }
    firstDigit = n;
    printf("Sum = %d", firstDigit + lastDigit);
    return 0;
}