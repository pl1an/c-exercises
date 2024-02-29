# include <stdio.h>
int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if(a>=(b+c)){
        printf("impossible triangle formation");
    }
    else if(a*a==(b*b+c*c)){
        printf("retangle triangle\n");
    }
    else if(a*a>(b*b+c*c)){
        printf("obtuse triangle\n");
    }
    else if(a*a<(b*b+c*c)){
        printf("acute triangle\n");
    }

    if(a==b && b==c){
        printf("equilateral triangle\n");
    }
    else if(a==b||b==c||c==a){
        printf("isosceles triangle\n");
    }

    return 0;
}
