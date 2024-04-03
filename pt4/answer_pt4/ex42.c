#include <stdio.h>
int main(){
    int weights[8], scores[8];
    int score_sum=0, weight_sum=0;

    for(int i=0; i<8; i++){
        scanf("%d", &weights[i]);
    }
    for(int i=0; i<8; i++){
        scanf("%d", &scores[i]);
    }

    for(int i=0; i<8; i++){
        score_sum += weights[i]*scores[i];
        weight_sum += weights[i];
    }

    printf("%.2f", (float)score_sum/(weight_sum));

    return 0;
}
