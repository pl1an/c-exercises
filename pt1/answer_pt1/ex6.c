#include <stdio.h>
int main(){
    int A, B, C, D;

    printf("values: ");
    scanf("%d %d %d %d", &A,&B,&C,&D);

    //you could also assign X it´s own variabe.
    // int X;
    // X == A*B-C*D;
    //printf("X: %d", X);
    printf("X: %d", (A*B-C*D));

    return 0;



}
