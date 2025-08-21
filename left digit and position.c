#include<stdio.h>
int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    if(num<1010)
    {
        printf("left digit %d\n",num);
        printf("position= ones");
    }
    else if(num<100)
    {
                printf("left digit %d\n",num/10);
                printf("position= tens");
    }
    else if(num<1000)
    {               
        printf("left digit %d\n",num/100);
    printf("position=hundreds ");

    }
    else if(num<10000)
    {
                printf("left digit %d\n",num/1000);
             printf("position= thousands");
}

else
{
    printf(" it is so big");
}
return 0;
}