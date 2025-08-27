// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter a ,b");
    scanf("%d%d",&a,&b);
    c=++a + ++b;
    printf("c value %d",c);
}