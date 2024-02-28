#include <stdio.h>
int main(){
    float A, B, C;

    printf("score: ");
    scanf("%f%f%f", &A, &B, &C);

    //you could also assign a variable the value and print it instead.
    //float medium;
    //medium = (A*2+B*3+C*5)/10;
    //printf\("%.1f", medium);
    printf("%.1f", (A*2+B*3+C*5)/10);

    return 0;





}
