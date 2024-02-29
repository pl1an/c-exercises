# include <stdio.h>
int main(){
    int count=0;
    float sum=0, num;

    while(1){
        scanf("%f", &num);

        if(num<0) break;
        else{
            sum += num;
            count++;
        }
    }

    printf("%.2f", sum/count);

    return 0;
}
