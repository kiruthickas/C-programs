#include <stdio.h>
#include <ctype.h>
int main() {
char str[100];
int sum=0,cn=0,i;
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
    if(isdigit(str[i])){
        cn=cn*10+(str[i]-'0');
    }
    else
    {
        sum+=cn;
        cn=0;
    }
}
 sum+=cn;
printf("%d",sum);
return 0;
}