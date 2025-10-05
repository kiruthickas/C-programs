
#include <stdio.h>
#include<math.h>
int main() {
int n,square,digits=0,right,left,divisor,sum,temp;
printf("enter n");
scanf("%d",&n);
temp=n;
square=n*n;
while(temp>0)
{
    digits++;
    temp=temp/10;
}
divisor=pow(10,digits);
right=square%divisor;
left=square/divisor;
sum=right+left;
if(sum==n)
printf("it is kaprekar");
else
printf("not a kaprekar");
}
