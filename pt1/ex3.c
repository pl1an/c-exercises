#include <stdio.h>
int main(){
    float side;
    float perimeter;
    float area;

    printf("square side: ");
    scanf("%f", &side);

    area = side * side;
    perimeter = side * 4;
    
    //again, the calculations could also be done inside printf()
    //printf("perimeter: %.1f \narea: %.1f", side * 4, side * side);
    printf("perimeter: %.1f \narea: %.1f", perimeter, area);



}
