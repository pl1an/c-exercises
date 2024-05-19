#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char stri[12];
    int i=0;

    fgets(stri, 12, stdin);

    for(i=0; stri[i]!='\0'; i++);
    printf("%d", i-1);

    return 0;
}
