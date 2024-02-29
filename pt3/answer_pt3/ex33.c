#include <stdio.h>
int main(){
    int N;
    int add1=0;
    scanf("%d", &N);

    for(int count=0; count<N*2; count++){
        if(add1){
            printf("%d %d %d", count/2+1, (count/2+1)*(count/2+1)+1, (count/2+1)*(count/2+1)*(count/2+1)+1);
            add1=0;
        }
        else{
            printf("%d %d %d", count/2+1, (count/2+1)*(count/2+1), (count/2+1)*(count/2+1)*(count/2+1));
            add1=1;
        }
        printf("\n");
    }

    return 0;
}
