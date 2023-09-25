#include <stdio.h>
#include <stdlib.h>

int main(){
    int* arrayInt;
    int N,v;
    int count = 0;
    scanf("%d",&N);
    arrayInt = calloc(N,sizeof(int));
    for(int i = 0; i< N;i++){
        scanf("%d",&arrayInt[i]);
    }
    scanf("%d",&v);
    for(int i = 0; i<N;i++){
        if(v == arrayInt[i]){
            count++;
        }
    }
    printf("%d",count);
    free(arrayInt);
    return 0;
}