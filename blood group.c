#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b blood group ");
    scanf(" %d %d",&a,&b);
    if(a==1&&b==0)
    {
    printf("A blood group");
    }
    else if(a==0&&b==1)
    {
    printf(" B blood group ");
     }
     else if(a==1&&b==1)
    {
        printf(" C blood group");
    }
    else if( a==0&&b==1)
    {
    printf("D blood group");
    }
    else 
    {
    printf("wrong input");
    }
}