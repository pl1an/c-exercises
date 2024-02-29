# include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    // here you could also change the order of the if/else structure or use only ifs
    if(a>b){
        printf("%d is bigger", a);
    }
    else if (a==b){
        printf("they are equal");
    }
    else{
        printf("%d is bigger", b);
    }

    return 0;
}
