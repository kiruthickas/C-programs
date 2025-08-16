#include<stdio.h>
#include<math.h>
int main()
{

float p,n,r,ci;
printf("enter p,n,r");
scanf("%f%f%f",&p,&n,&r);
ci=p*pow((1+r/100),n);
printf("ci=%f",ci);
}