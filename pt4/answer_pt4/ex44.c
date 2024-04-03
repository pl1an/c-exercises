#include <stdio.h>
int main(){
    int finboacci[20] = {0, 1};
    for(int i=2; i<20; i++) finboacci[i] = finboacci[i-1] + finboacci[i-2];

    for(int i=0; i<20; i++) printf("%d ", finboacci[i]);

    return 0;
}
