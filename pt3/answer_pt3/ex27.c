# include <stdio.h>
int main(){
    int N, sum=0;
    scanf("%d", &N);

    for(int count=1; count<N; count++){
        if(N%count==0) sum += count;
    }

    if(sum==N) printf("%d is a perfect number", N);
    else printf("%d is not a perfect number", N);

    return 0;
}
