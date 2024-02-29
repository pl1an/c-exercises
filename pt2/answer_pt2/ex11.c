# include <stdio.h>
int main(){
    int A;
    scanf("%d", &A);

    //you could also use a if/else structure here instead of switch
    switch(A%2){
    case 0:
        printf("%d is even", A);
        break;
    default:
        printf("%d is odd", A);
        break;
    }

    return 0;
}
