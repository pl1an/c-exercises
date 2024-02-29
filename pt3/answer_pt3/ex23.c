#include <stdio.h>
int main(){
    int A, B;
    int oA;

    scanf("%d %d", &A, &B);
    oA = A;

    for(int count = 1; count<B; count++){
        A = A * oA;
    }
    printf("%d", A);

    return 0;
}
