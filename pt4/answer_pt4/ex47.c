#include <stdio.h>
int main(){
    int m1[3][3], m2[3][3];
    int product[3][3]={0};

    for(int i = 0; i<3; i++){
        for(int ii = 0; ii<3; ii++){
            scanf("%d", &m1[i][ii]);
        }
    }
    printf("\n");
    for(int i = 0; i<3; i++){
        for(int ii = 0; ii<3; ii++){
            scanf("%d", &m2[i][ii]);
        }
    }

    for(int lines1=0; lines1<3; lines1++){
        for(int col2=0; col2<3; col2++){
                for(int i1 = 0; i1<3; i1++){
                    product[lines1][col2] += m1[lines1][i1]*m2[i1][col2];
                }
        }
    }

    for(int i = 0; i<3; i++){
        for(int ii = 0; ii<3; ii++){
            printf("%d ", product[i][ii]);
        }
        printf("\n");
    }

     return 0;
}
