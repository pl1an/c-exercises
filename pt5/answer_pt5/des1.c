#include <stdio.h>
#include <math.h>
#include <string.h>

int f_alpha(char target){
    int ii=0;
    char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
    for(ii; alpha[ii]!=target; ii++){}
    return ii;
}

int main(){
    char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
    char target[27], code[27];
    int i=0, hold=0;

    fgets(target, 25, stdin);

    for(i; target[i]!='\0'; i++){
        if(target[i]==' '){
            code[i] = ' ';
        }
        else{
            hold = f_alpha(target[i])+3;
            if(hold>25) hold -= 26;
            code[i] = alpha[hold];
        }
    }
    code[i-1] = '\0';

    fputs(code, stdout);

    return 0;
}
