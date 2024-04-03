#include <stdio.h>
int main(){
    int array[10];
    int larger, smaller;

    for(int i=0; i<10; i++){
        scanf("%d", &array[i]);
    }

    larger = array[0];
    smaller = array[0];

    for(int i=0; i<10; i++){
        if(array[i]>larger){
            larger = array[i];
        }
        if(array[i]<smaller){
            smaller = array[i];
        }
    }

    printf("larger: %d\nsmaller: %d", larger, smaller);
    return 0;
}
