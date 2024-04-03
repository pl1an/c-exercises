#include <stdio.h>
int main(){
    int m[3][3]={};

    for(int i = 0; i<3; i++){
        for(int ii = 0; ii<3; ii++){
            scanf("%d", &m[i][ii]);
        }
    }

    for(int i = 0; i<3; i++){
        for(int ii = 0; ii<3; ii++){
            printf("%d ", m[i][ii]);
        }
        printf("\n");
    }

    return 0;
}
