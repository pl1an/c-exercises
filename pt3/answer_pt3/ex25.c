#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a==0 || b*b-4*a*c<=0){
        printf("no real sqrt");
    }
    else{
        //you could also have stored R1 and R2 inside variables
        printf("R1: %.5lf\nR2: %.5lf", (-b+sqrt(b*b-4*a*c))/(2*a), (-b-sqrt(b*b-4*a*c))/(2*a));
    }

    return 0;
}
