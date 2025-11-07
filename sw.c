#include <stdio.h>

int main() {
   int n=7;
   scanf("%d",&n);
   switch(n)
   {
       case 1:
       {
       printf("the corresponding day is sunday");
          break;
   }
   
       case 2:{
           printf("the corresponding day is monday");
              break;
       }
       case 3:{
           printf("the corresponding day is tuesday");
             break; 
       }
       case 4:{
           printf("the corresponding day is wednesday");
             break;
       }
       case 5:{
           printf("the corresponding day is thursday");
              break; 
       }
       case 6:{
           printf("the corresponding day is friday");
             break; 
   }
   case 7:{
           printf("the corresponding day is saturday");
               break; 
   }
   default :
   printf("invalid choice");
       }
       }