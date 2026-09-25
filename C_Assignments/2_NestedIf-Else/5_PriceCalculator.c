#include <stdio.h>

int main() {
    int price;
    char check;

    printf("Enter Price of Your Cart: ");
    scanf("%d", &price);

    printf("Are You Student (y/n): ");
    scanf(" %c", &check);

    if (check == 'y' || check == 'Y') {
        if (price > 500) {
            printf("20 percent Discount is Applied");
        } else {
            printf("10 percent Discount is Applied");
        }
    } else {
        if (price > 600) {
            printf("15 percent Discount is Applied");
        } else {
            printf("No Discount Can be Applied");
        }
    }

    return 0;
}