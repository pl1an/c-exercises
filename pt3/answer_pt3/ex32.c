#include <stdio.h>
int main(){
    int target_days;
    int y=0, m=0, d=0;
    scanf("%d", &target_days);

    //you could also do something like this, but this is just the unoptimized versio of the code below it
    /*
    if(target_days%365==target_days){
        if(target_days%30==target_days){
            d=target_days;
        }
        else{
            m=(target_days-(target_days%30))/30;
            d=target_days%30;
        }
    }
    else{
        y=(target_days-(target_days%365))/365;
        m=(target_days%365-(target_days%365)%30)/30;
        d=(target_days%365)%30;
    }*/

    y=target_days/365;
    m=target_days%365/30;
    d=target_days%365%30;

    printf("%d years\n%d months\n%d days", y, m, d);

    return 0;
}
