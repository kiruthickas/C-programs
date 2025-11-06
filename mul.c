int main()
{
    int n,i=1,result=0;
    scanf("%d",&n);
    if(n>=1&&n<=100){
    do{
        result=n*i;
        printf("%d X %d=%d\n",n,i,result);
        i++;
    }
    while(i<=10);
    }
    return 0;
}