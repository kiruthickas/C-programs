#include<stdio.h>
int main()
{
int choice,num,nearest;
printf("enter num");
scanf("%d",&num);
printf("enter choice");
scanf("%d",&choice);
if(choice==1)
if(num%2==0)
printf("even");
else
printf("odd");
else if(choice==2)
if(num>0)
printf("positive");
 else if(num<0)
printf("negative");
else
printf("0 is neither positive nor negative");
if(choice==3)
{
nearest=(num/10*10);
printf("nearest tens%d",nearest);
}
else  if (choice==4)
printf("thank you");
}


