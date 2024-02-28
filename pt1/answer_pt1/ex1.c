#include <stdio.h>
int main(){
    int A;
    int B;
    int sum;

    printf("A: ");
    scanf("%d", &A);
    printf("B: ");
    scanf("%d", &B);

    sum = A+B;
    // the sum calculations could also be done inside the printf statement.
    //printf("the sum is: %d", A+B);
    printf("the sum is: %d", sum);

    return 0;
}
