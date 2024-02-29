#include <stdio.h>
int main(){
    int sI, sG;
    int count=0;
    int vI=0, vG=0, tie=0;
    int answer=1;

    printf("new play (1-yes 2-no): ");
    scanf("%d", &answer);

    //instead of using this while condition, you could also use if inside the loop to break it, or a different condition
    while(!(answer-1)){
        printf("score I and score G: ");
        scanf("%d %d", &sI, &sG);

        if(sI>sG) vI++;
        if(sG>sI) vG++;
        if(sI==sG) tie++;

        printf("\n--\nnew play (1-yes 2-no): ");
        scanf("%d", &answer);

        count++;
    }

    printf("I victories: %d\nG victories: %d\nties: %d", vI, vG, tie);
    if(vI>vG) printf("\nI won more!");
    if(vG>vI) printf("\nG won more!");
    if(vG==vI) printf("\ntie!");

    return 0;
}
