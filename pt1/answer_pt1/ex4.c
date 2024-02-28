#include <stdio.h>
int main(){
    int A;
    int B;
    // you could also declare another float variable to ake the conversion
    //float a;
    //division = a/B;

    float division;

    scanf("%d%d", &A, &B);

    //you could also convert either A or B to float
    //division = (float)A/B
    division = ((A*10)/(B));

    printf("%.1f", division/10);

    return 0;




}
