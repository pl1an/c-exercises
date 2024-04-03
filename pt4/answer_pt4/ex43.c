#include <stdio.h>
int main(){
    int array1[6], array2[6];
    int sum=0;
    for(int i=0; i<6; i++) scanf("%d", &array1[i]);
    for(int i=0; i<6; i++) scanf("%d", &array2[i]);

    for(int i=0; i<6; i++) sum += array1[i]*array2[i];
    printf("%d", sum);

    return 0;
}
