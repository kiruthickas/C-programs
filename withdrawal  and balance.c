// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int withdrawal,balance,hundreds,fivehundreds;
    printf("enter withdrawal");
    scanf("%d",&withdrawal);
    printf("enter balalnce");
    scanf("%d",&balance);
    if(withdrawal%100==0&&balance>=1000)
    {
        fivehundreds=withdrawal/500;
        withdrawal=(withdrawal-(fivehundreds*500));
        printf("fivehundred=%d",fivehundreds);
        hundreds=withdrawal/100; 
        withdrawal=(withdrawal-(hundreds*100));
        printf("hundreds=%d",hundreds);
        printf("balance amount=%d",withdrawal);
    }
}