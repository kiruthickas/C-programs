int main()
{
    int n;
    scanf("%d",&n);
    if(n<=0||n>20)
    {
        printf("invalid input");
    }
    int a=0,b=1,temp,i;
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
    if(i!=n)
        printf(" ");
        temp=a+b;
        a=b;
        b=temp;
    }
    printf("\n");
}