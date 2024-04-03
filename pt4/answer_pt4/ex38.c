#include <stdio.h>
int main(){
    int array[12];
    int target;

    for(int i=0; i<12; i++){
        scanf("%d", &array[i]);
    }

    scanf("%d", &target);
    for(int i=0; i<12; i++){
        if(array[i]==target){
            printf("index %d", i);
        }
    }
    return 0;
}
