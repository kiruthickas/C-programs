// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        // increasing numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // decreasing numbers
        for(j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");  // move to next line
    }

    return 0;
}