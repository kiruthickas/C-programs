// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int class,failedsubject,grace;
    printf("\n enter class");
    scanf("%d",&class);
    printf("\n enter subject no of failed subject");
    scanf("%d",&failedsubject);
    switch(class)
    {
    case 1:
    if(failedsubject >3)
    
    {
        
printf("no grace mark");
}

else if(failedsubject<=3)
{
     grace=failedsubject*5;
printf("grace mark  %d",grace);
}
break;
case 2:
if(failedsubject>2){
printf("no grace");
}
else if(failedsubject<=2)
{
     grace=failedsubject*4;
printf("gracce mark  %d",grace);
}
break;
case 3:
if(failedsubject>1)
{
printf("no grace");
}
else if(failedsubject<=1)
{
    grace=failedsubject*5;
printf("grace mark  %d",grace);
}
break;
default:
{
printf("invalid syntax");
}
}

    return 0;
}