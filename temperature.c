
#include <stdio.h>
int main() {
   int temp,c;
   printf("enter temp");
   scanf("%f",&temp);
   if(temp>80)
   { 
      c=(temp-32)*5/9;
      printf("temperature in celcious %f",c);
   }
   else
   {
      c=temp;
      printf("temperature in celcious %f",c);
   }
   if(c>=35)
   {
       printf("\n it is hot");
   }
   else if(c>=15&&c<35)
   {
       printf("\n it is medium");
      else
      printf("\n it is cold");
      
   }

}
