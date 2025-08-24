// Online C compiler to run C program online
#include <stdio.h>

int main() {
float percentage,total,sub1,sub2,sub3,sub4,sub5;
    printf(" 5 subject marks sub1,sub2,sub3,sub4,sub5");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    percentage=(total/500.0)*100.0;
    printf("total %.2f",total);
    printf("percentage%.2f%%",percentage);
    return 0;
}