#include <stdio.h>
int main() {
  int a,b,c,n=0;
  printf("enter no");
  scanf("%d",&n);
  a=n/100;
  n=n-a*100;
  printf("a value =%d\n",a);
  b=n/50;
  n=n-b*50;
  printf("b value=%d\n",b);
  c=n/10;
  n=n-c*10;
  printf(" c value =%d\n",c);
  printf("balance amount=%d\n",n);
}
  
  