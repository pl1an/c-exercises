#include <stdio.h>
int main(){
    int array[8];
    int odd=0, even=0;

    for(int i=0; i<8; i++){
        scanf("%d", &array[i]);
    }

    for(int i=0; i<8; i++){
        if(array[i]%2==0) even++;
        else odd++;
    }

    if(odd==even) printf("equal");
    else if(odd>even) printf("more odds");
    else printf("more evens");

    return 0;
}
