#include <stdio.h>

int main() {
    int i,j,r,c,a[20][20],b[20][20],add[20][20],sub[20][20];
    printf("enter row and column");
    scanf("%d %d",&r,&c);
     printf(" \nthe first matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            }
    }
     printf("\nthe second matrix");
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
            add[i][j]=a[i][j]+b[i][j];
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("addition matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf(" %d",add[i][j]);
        }
        printf("\n");
    }
    printf("\n subtraction matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf(" %d",sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}

