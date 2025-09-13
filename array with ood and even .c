#include <stdio.h>

int main() {
    int n,i,y=0,k=0;
    int num[28],even[28],odd[28];
    printf("enter number");
    scanf(" %d",&n);
    printf("array elelments");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        }
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0)
            even[k++]=num[i];
    else
        odd[y++]=num[i];
    }
    
    printf("even number ");
    for(i=0;i<k;i++)
    {
        printf("%d", even[i]);
    }
    printf("odd number");
    for(i=0;i<y;i++)
    {
        printf("%d", odd[i]);
    }
    return 0;
    }
