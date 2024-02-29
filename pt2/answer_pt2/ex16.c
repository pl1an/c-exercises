# include <stdio.h>
int main(){
    int N;
    int trie = 0, smaller, larger;

    // instead of for, a while and a increasing variable could be used here
    scanf("%d", &N);
    for(int count=0; count<N; count++){

        scanf("%d", &trie);
        if(count==0){
            smaller = trie;
            larger = trie;
        }

        if(trie>larger){
            larger = trie;
        }
        if(trie<smaller){
            smaller = trie;
        }
    }

    printf("smaller: %d\nlarger: %d", smaller, larger);

    return 0;
}
