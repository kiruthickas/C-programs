#include <stdio.h>
int main() {
    int n, num, rev = 0, digit;

    printf("Enter number: ");
    scanf("%d", &n);

    num = n; \

    while (n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit; 
        n = n / 10;             
    }

    printf("Reverse = %d\n", rev);

    if (num == rev)
        printf("It is a palindrome\n");
    else
        printf("It is not a palindrome\n");

    return 0;
}