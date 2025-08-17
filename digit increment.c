#include <stdio.h>
int main() {
    int tens,ones,newnum,num;
    printf("enter num");
    scanf("%d",&num);
    tens=num/10;
    ones=num%10;
    tens=(tens+1)%10;
    ones=(ones+1)%10;
    newnum=(tens*10)+ones;
    printf("new number %d\n",newnum);
    return 0;
}