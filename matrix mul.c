// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k,r,c,a[20][20],b[20][20],d[20][20];
    printf("enter row and column\n");
    scanf("%d %d",&r,&c);

    printf("first matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            }
    }
    printf("second matrix \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
            
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            d[i][j]=0;
            
            }
    }
    for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           for(k=0;k<c;k++)
       {
           d[i][j]=d[i][j]+(a[i][k]*b[k][j]);
           
       }
   }
  }
   printf("resultant matrix");
    for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
      {
          printf("%d\t",d[i][j]);
          
      }
   }
      return 0;
   }
      
    