#include <stdio.h>
#include <stdlib.h>
int main(){
    int array[30000];
    int min_pos, hold;

    srand(673);
    for(int i=0; i<30000; i++){
        array[i]=rand()%10000;
    }


    for(int i=0; i<30000; i++){
        min_pos = i;
        for(int ii=i; ii<30000; ii++){
            if(array[ii]<array[min_pos]){
                min_pos = ii;
            }
        }
        hold = array[i];
        array[i] = array[min_pos];
        array[min_pos] = hold;
    }


    for(int i=0; i<30000; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
