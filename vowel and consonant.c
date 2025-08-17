#include <stdio.h>

int main()
{
int a,b,temp;
printf("enter a and b values");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("swapped value=%d %d",a,b);
}