#include <stdio.h>
int main(){
    int array[8];
    for(int i=0; i<8; i++){
        scanf("%d", &array[i]);
    }

    for(int i=0; i<8; i++){
        if(array[i]>0){
            printf("%d ", array[i]);
        }
    }

    return 0;
}
