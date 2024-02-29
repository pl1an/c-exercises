# include <stdio.h>
int main(){
    int a, b;

    //here you could also set a and b to the same default value to use a while without the do
    //or use a scanf outside the while loop
    do{
        scanf("%d %d", &a, &b);
    }while(a==b);

    //you could also use a more similiar if/else structure to ex12.c
    if(b>a){
        a = b;
    }
    printf("%d is bigger", a);

    return 0;
}
