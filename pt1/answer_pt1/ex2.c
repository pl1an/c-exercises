#include <stdio.h>
int main(){
    int var1;
    int var2;
    int storage;

    scanf("%d %d", &var1, &var2);

    storage = var1;
    var1 = var2;
    var2 = storage;

    printf("%d %d", var1, var2);

    return 0;
}
