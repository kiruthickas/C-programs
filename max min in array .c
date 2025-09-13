// Online C compiler to run C program online
#include<stdio.h>
int main() {
     int i,n,num[28],max=0,min=0;
    printf("enter number");
    scanf("%d",&n);
    printf("array elelments ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
        max=num[0];
        min=num[0];
    for(i=0;i<n;i++)
  {
   if(num[i]<min)
  {
       min=num[i];
  }
  
   if(num[i]>max)
   {
       max=num[i];
   }
  }
   

   printf("smallest number %d\n",min);
   printf("largest number %d\n",max);
  
  }
  
  