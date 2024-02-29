# include <stdio.h>
int main(){
    int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;
    int target_value;
    scanf("%d", &target_value);

    //you could also do something like this, but... just don´t
    /*
    int cash=0;
    while(cash<=target_value){
        cash += 100;
        n100++;
    }
    cash -= 100;
    n100--;

    while(cash<=target_value){
        cash += 50;
        n50++;
    }
    cash -= 50;
    n50--;

    while(cash<=target_value){
        cash += 20;
        n20++;
    }
    cash -= 20;
    n20--;

    while(cash<=target_value){
        cash += 10;
        n10++;
    }
    cash -= 10;
    n10--;

    while(cash<=target_value){
        cash += 5;
        n5++;
    }
    cash -= 5;
    n5--;

    while(cash<=target_value){
        cash += 2;
        n2++;
    }
    cash -= 2;
    n2--;

    while(cash<=target_value){
        cash += 1;
        n1++;
    }
    cash -= 1;
    n1--;
    */

    n100 = target_value/100;
    n50  = target_value%100/50;
    n20  = target_value%100%50/20;
    n10  = target_value%100%50%20/10;
    n5   = target_value%100%50%20%10/5;
    n2   = target_value%100%50%20%10%5/2;
    n1   = target_value%100%50%20%10%5%2;

    printf("%d 100s \n%d 50s \n%d 20s \n%d 10s \n%d 5s \n%d 2s \n%d 1s", n100, n50, n20, n10, n5, n2, n1);

    return 0;
}
