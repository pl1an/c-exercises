#include <stdio.h>
int main(){
    int horas, id;
    float salary;

    printf("horas, id e ganho por hora: ");
    scanf("%d %d %f", &id, &horas, &salary);

    printf("NUMBER: %d \nSALARY: %.2f", id, salary*horas);

    return 0;
}
