#include <stdio.h>
int main(){
    int A;
    int B;

    float division;

    printf("dividendo/divisor: ");
    scanf("%d%d", &A, &B);

    division = ((A*10)/(B));
    division = division/10;

    printf("resultado: %.1f", division);

    return 0;




}
