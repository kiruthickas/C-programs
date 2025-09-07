#include <stdio.h>
int main()
{
   int n=0,i=0, sum__nat=0,sum__even=0,sum__odd=0;
   scanf("%d",&n);
   while(i<=n)
   {
       sum__nat=sum__nat+i;
       if(i%2==0)
       {
       sum__even=sum__even+i;
       }
       else
       {
       sum__odd=sum__odd+i;
       }
       i++;
   }
  printf("natural numbers %d \n ",sum__nat);
printf("natural numbers %d \n ",sum__even);
   printf("natural numbers %d \n ",sum__odd);
   
}
