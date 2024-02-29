# include <stdio.h>
int main(){
    int code1, n1;
    int code2, n2;
    float price1, price2;

    printf("id, number and price: ");
    scanf("%d %d %f", &code1, &n1, &price1);

    printf("id, number and price: ");
    scanf("%d %d %f", &code2, &n2, &price2);

    printf("total price: %.2f", (n1*price1)+(n2*price2));

    return 0;
}
