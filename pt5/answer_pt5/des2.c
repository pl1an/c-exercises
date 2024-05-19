#include <stdio.h>
#include <math.h>
#include <string.h>

int check(int a, int b){
    int i=1;
    for(i; b%i!=b; i*=10){}
    if((a-b)%(i)==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", check(a, b));
    return 0;
}

