#include<stdio.h>
int main()
{
    int score;
    printf("enter score ");
    scanf("%d",&score);
    if(score>=90)
    printf("grade a");
    else if(score>=80&&score<=89)
    printf("grade  b");
     else if(score>=70&&score<=79)
    printf("grade c");
    else if( score>=60&&score<=69)
    printf("score d");
    else 
    printf("score e");
}