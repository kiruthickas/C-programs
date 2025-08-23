// Online C compiler to run C program online
#include <stdio.h>
int main() {
int stock1=5,stock2=5,stock3=5,stock4=5,stock5=5;
int price1=20,price2=24,price3=30,price4=34,price5=44;
int choice;
printf("Welcome to Snack Dispenser!\n");                
printf("Menu:\n");                                      
printf("1. Chips  %d %d\n", price1, stock1);      
printf("2. Biscuits: %d %d\n", price2, stock2);   
printf("3. Juice :%d  %d\n", price3, stock3);      
printf("4. Chocolate :%d %d\n", price4, stock4); 
printf("5. Cake:%d  %d\n", price5, stock5);      
printf("enter choice ");
scanf("%d",&choice);
switch(choice){
case 1:
if(stock1>0){
stock1--;
             printf("You ordered Chips\n");
              printf("Bill Amount: Rs.%d\n", price1);
              printf("Remaining stock: %d\n", stock1);
            } else {
                printf("Sorry, Chips are out of stock!\n");
            }
            break;
              case 2:
            if(stock2 > 0) {
                stock2--;
                printf("You ordered Biscuits\n");
                printf("Bill Amount: Rs.%d\n", price2);
                printf("Remaining stock: %d\n", stock2);
            } else {
                printf("Sorry, Biscuits are out of stock!\n");
            }
            break;

        case 3:
            if(stock3 > 0) {
                stock3--;
                printf("You ordered Juice\n");
                printf("Bill Amount: Rs.%d\n", price3);
                printf("Remaining stock: %d\n", stock3);
            } else {
                printf("Sorry, Juice is out of stock!\n");
            }
            break;

        case 4:
            if(stock4 > 0) {
                stock4--;
                printf("You ordered Chocolate\n");
                printf("Bill Amount: Rs.%d\n", price4);
                printf("Remaining stock: %d\n", stock4);
            } else {
                printf("Sorry, Chocolate is out of stock!\n");
            }
            break;

        case 5:
            if(stock5 > 0) {
                stock5--;
                printf("You ordered Cake\n");
                printf("Bill Amount: Rs.%d\n", price5);
                printf("Remaining stock: %d\n", stock5);
            } else {
                printf("Sorry, Cake is out of stock!\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

  