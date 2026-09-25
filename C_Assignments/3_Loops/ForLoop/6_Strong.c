#include <stdio.h>

int main() {
    int n = 145;
    int copied = n;
    int remainder;
    int fact;
    int sum = 0;

    for (int index = n; index > 0; index = index / 10) {
        remainder = index % 10;
        fact=1;
        for (int i = 1; i <= remainder; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
    }

    if (copied == sum) {
        printf("Strong Number");
    } else {
        printf("Not a Strong Number");
    }
    return 0;
}