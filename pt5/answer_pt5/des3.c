#include <stdio.h>
#include <string.h>

double root(double n){
    double ans;
    double error = 0.0000001;

    ans = n;
    while(ans-(n/ans)>error){
        printf("%lf\n", ans);
        ans = (ans+n/ans)/2;
    }
    return ans;
}

int main(){
    double t;
    scanf("%lf", &t);
    printf("%lf", root(t));
    return 0;
}
