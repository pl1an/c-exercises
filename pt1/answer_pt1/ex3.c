#include <stdio.h>
int main(){
    float side;
    float perimeter;
    float area;

    printf("square side: ");
    scanf("%f", &side);

    area = side * side;
    perimeter = side * 4;

    printf("perimetro: %.1f \narea: %.1f", perimeter, area);



}
