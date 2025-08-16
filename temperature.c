
#include <stdio.h>
int main() {
   int temp,c,f;
   printf("enter temp");
   scanf("%d",&temp);
   c=(f-32)*5/9;
   if(temp>=80)
   {
       printf("\n it is hot");
   }
   else if(temp>=60&&temp<=80)
   {
       printf("\n it is medium");
   }
   else 
   {
       printf("\n it is cold");
       
   }
}