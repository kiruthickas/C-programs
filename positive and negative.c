#include<stdio.h>
int main()
{
    int a,b;
    printf(" enter a and b");
    scanf("%d%d",&a,&b);
    if(a>0&&b>0)
    printf("it is positive");
    else if (a<0&&b<0)
    printf(" it is negative");
    else 
    printf("not found");
    
}