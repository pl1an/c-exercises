#include <stdio.h>
int main(){
    int factorial[15]={1,1}, n=1;

    for(int i=2; i<15; i++){
        for(int ii=1; ii<=i; ii++){
            n *= ii;
        }
        factorial[i] = n;
        n = 1;
    }

    for(int i = 0; i<15; i++) printf("%d ", factorial[i]);

    return 0;
}
