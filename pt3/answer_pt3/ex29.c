# include <stdio.h>
int main(){
    int distance;
    float liters;
    scanf("%d %f", &distance, &liters);

    printf("%.3f kM/L", distance/liters);

    return 0;
}
