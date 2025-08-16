#include <stdio.h>

int main() {
    float rating;
    printf("enter IMBD rating of the movie");
    scanf("%f",&rating);
    {
    if(rating >=9.0)
    
    printf("must watch");
    
    else if(rating>=7.0)
    
    printf("good marks");
    
    else if(rating>=5.0)
    
    printf("average");
    
    else if(rating<5.0)
    
    printf("skip it");

}
}