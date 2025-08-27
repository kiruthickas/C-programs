#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter no");
    scanf("%d %d",&a,&b);
    c=++a + b++;
    printf(" c  value %d",c);
    
    return 0;
}