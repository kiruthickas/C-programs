
int main() {
    char ch,prev,next;
    printf("enter character");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    if(ch=='z')
    next='a';
    else
    next=ch+1;
    if(ch=='a')
    prev='z';
    else
    prev=ch-1;
    printf("the character %c\n",prev);
    printf("the character %c ",next);
}
    
    
    
