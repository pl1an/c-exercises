# include <stdio.h>
int main(){
    // instead of using int number=0 here, a do/while structure could be used in line 8
    int number=0;
    int min;
    int max;

    while(number%2==0||number<0){
        scanf("%d", &number);
    }

    min = 1;
    max = number+1;

    while(1){
        for(int count = min; count<max; count++){
            printf("%d ", count);
        }

        printf("\n");
        min++;
        max--;

        if(max-min<1){
            break;
        }
    }

    return 0;
}
