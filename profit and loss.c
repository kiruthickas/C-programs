#include<stdio.h>
int main()
{
    int sp,cp;
    printf("enter sp ");
    scanf("%d",&sp);
    printf("enter cp");
    scanf("%d",&cp);
    if(sp>cp)
    printf("profit");
    else if(cp>sp)
    printf("loss");
    else if (sp=cp)
    printf("same");
}