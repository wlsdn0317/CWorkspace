#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    int i,j,k;

    int arrayInt[N];
    for(int l =0;l<N;l++){
        arrayInt[l] = 0;
    }

    for(int l =0; l<M;l++){
        scanf("%d %d %d",&i,&j,&k);
        for(int m =i-1;m<j;m++){
            arrayInt[m] = k;
        }
    }

    for(int l = 0; l<N;l++){
        printf("%d ",arrayInt[l]);
    }


    return 0;
}