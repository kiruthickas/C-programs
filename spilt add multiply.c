// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int tens,ones,newnum1,newnum2,num;
    printf("enter num");
    scanf("%d",&num);
    tens=num/10;
    ones=num%10;
    newnum1=tens+ones;
    printf("new number=%d\n",newnum1);
    newnum2=tens*ones;
    printf("new number %d\n",newnum2);
    return 0;
}