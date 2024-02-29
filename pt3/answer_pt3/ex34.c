#include <stdio.h>
int main(){
    int N, Nweights;
    float score, sum;
    scanf("%d", &N);

    //you could also use a while instead of for
    //using a previously declared i in the for could substitute Nweights
    for(int i=0; i<N; i++){
        scanf("%f", &score);
        sum += score*i;
        Nweights += i;
    }

    printf("score: %.2f\n", sum/Nweights);

    if(sum/Nweights>=9) printf("A");
    else if(sum/Nweights>=7.5) printf("B");
    else if(sum/Nweights>=6) printf("C");
    else if(sum/Nweights>=4) printf("D");
    else printf("E");

    return 0;
}
