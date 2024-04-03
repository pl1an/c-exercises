#include <stdio.h>
int main(){
    int array[6];
    for(int i=0; i<6; i++){
        scanf("%d", &array[i]);
    }

    for(int i=0; i<6; i++){
        printf("%d ", array[i]);
    }

    return 0;
}
