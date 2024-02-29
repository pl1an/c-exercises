# include <stdio.h>
int main(){
    int N;
    int num;
    int even=0, odd=0, pos=0, neg=0;

    scanf("%d", &N);
    //here a while and a increasing variable could also be used
    for(int count=0; count<N; count++){
        scanf("%d", &num);

        if(num%2==0){
            even++;
        }
        else{
            odd++;
        }

        if(num>0){
            pos++;
        }
        else if (num<0){
            neg++;
        }
    }

    printf("even: %d\nodd: %d\npositives: %d\nnegatives: %d", even, odd, pos, neg);

    return 0;
}
