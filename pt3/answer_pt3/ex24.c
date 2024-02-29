#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    //as usual, the for could also be a while
    //the if structure could be literally case by case, using else ifs
    for(int count = 1; count<=N; count++){
        if(count%3==0){
            printf("Fizz");
        }
        if(count%5==0){
            printf("Buzz");
        }
        if(count%3!=0&&count%5!=0){
            printf("%d", count);
        }
        printf(" ");
    }

    return 0;
}
