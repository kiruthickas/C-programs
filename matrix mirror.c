// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,r,c,a[20][20],b[20][20],flag=1;
    printf("enter row and column");
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
            if(a[i][j]!=b[i][c-j-1])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    printf("the matrix is mmirror image\n");
    else
    printf("the matrix is not mirror image\n");
return 0;
}
    
    