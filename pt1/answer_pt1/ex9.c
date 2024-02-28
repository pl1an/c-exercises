#include <stdio.h>
int main(){
    int hrs, velocity;
    float liters;

    scanf("%d %d", &hrs, &velocity);

    //you could also change the type of velocity mid operation.
    //liters = (float)velocity*hrs/12;
    liters = (velocity*hrs*1000)/12;
    printf("litros: %.3f", liters/1000);

    return 0;
}
