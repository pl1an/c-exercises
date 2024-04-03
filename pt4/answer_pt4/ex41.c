#include <stdio.h>
int main(){
    float array[10], sum=0;

    for(int i=0; i<10; i++){
        scanf("%f", &array[i]);
    }

    for(int i=0; i<10; i++){
        sum += array[i];
    }
    printf("%.2f", sum);

    return 0;
}
