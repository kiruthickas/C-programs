#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a, b ,c");
    scanf("%d%d%d",&a,&b,&c);
    if((a*a)==(b*b)+(c*c))
    printf("it is pythagoroas");
    else
    printf("it is not pythagoroas");
}