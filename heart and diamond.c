#include <stdio.h>
#include <conio.h>   // For getch() and clrscr() in old Turbo C compilers

int main() {
    int rows = 25;   // You can change depending on screen size
    int cols = 80;   // Usually 80 characters per line
    int i, j;

    clrscr();   // Clears the screen (Turbo C). Ignore if using modern GCC.

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if((i + j) % 2 == 0)
                printf("%c", 3);   // Heart (ASCII 3)
            else
                printf("%c", 4);   // Diamond (ASCII 4)
        }
        printf("\n");   // Next row
    }

    getch();    // Wait for key press
    return 0;