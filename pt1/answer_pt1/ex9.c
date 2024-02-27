#include <stdio.h>
int main(){
    int horas, velocidade;
    float litros;

    printf("horas e velocidade media: ");
    scanf("%d %d", &horas, &velocidade);

    litros = (velocidade*horas*1000)/12;
    printf("litros: %.3f", litros/1000);

    return 0;
}
