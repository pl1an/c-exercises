#include <stdio.h>
int main(){
    int hrs, id;
    float salary;

    scanf("%d %d %f", &id, &hrs, &salary);

    // you could also declare a float variable monthly_salary and make calculations inside it and print it.
    printf("NUMBER: %d \nSALARY: %.2f", id, salary*hrs);

    return 0;
}
