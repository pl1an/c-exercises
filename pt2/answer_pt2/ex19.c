# include <stdio.h>
int main(){
    int N=0, count=0;
    float sum=0, num;
    scanf("%d", &N);

    //a while loop could be used instead of for
    for(count; count<N; count++){
        scanf("%f", &num);
        sum += num;
    }

    printf("%.2f", sum/count);

    return 0;
}
