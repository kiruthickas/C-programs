#include <stdio.h>

int main() {
    int n, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    } while(n > 0);

    printf("Reverse = %d\n", rev);

    return 0;