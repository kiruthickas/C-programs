#include <stdio.h>

int main() {
    int age, day,price;

    // Input age
    printf("Enter age: ");
    scanf("%d", &age);

    // Determine base price based on age
    if (age < 12) {
        price = 100;
    } else if (age <= 60) {
        price = 150;
    } else {
        price = 120;
    }
    printf("Enter day of the week (1-Sunday, 2-Monday,3-tuesday 4-wednesday , 5-thursday, 6-friday, 7-Saturday)");
    scanf("%d", &day);

    if (day == 4) {
        price =price- 20;
    }

    printf("Ticket price: ₹%d\n", price);

    return 0;
}
