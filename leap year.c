#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
if(year%4==0)
printf("leap year");
else 
printf("not leap year");
}