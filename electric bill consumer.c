// Online C compiler to run C program online
#include <stdio.h>
int main() {
  int units,bill=0;
  printf("enter units consumed");
  scanf("%d",&units);
  if(units<=100)
  bill=units*5;
  else if(units<=300)
  bill=(100*5)+(units-100)*7;
  else
  bill=(100*5)+(200*7)+(units-300)*10;
  printf("total bill=Rs %d\n",bill);
}