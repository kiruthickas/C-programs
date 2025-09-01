#include <stdio.h>
int main()
{
    int i,num,max;
    for(i=1;i<=10;i++)
    {
    printf("enter number%d",i);
    scanf("%d",&num);
    if(i==1)
    {
    max=num;
    }
    else if(num>max)
    {
    max=num;
    }
    }
    printf("maximum number%d\n",max);
    
   
}

