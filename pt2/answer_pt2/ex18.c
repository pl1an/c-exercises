# include <stdio.h>
int main(){
    //you could also use a while and a increasing variable here instead of for
    for(int count=1; count<101; count++){
        if(count%2==0){
            printf("%d\n", count);
        }
    }

    return 0;
}
