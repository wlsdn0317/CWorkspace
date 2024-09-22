#include <stdio.h>

int main(){
    
    int N,M;
    scanf("%d %d",&N,&M);
    int arrayInt[N];

    for(int i=0; i<N;i++){
        arrayInt[i]=i+1;
    }

    int i,j;
    int tmp =0;

    for(int k = 0;k<M;k++){
        scanf("%d %d",&i,&j);
        tmp = arrayInt[i-1];
        arrayInt[i-1] = arrayInt[j-1];
        arrayInt[j-1] = tmp;
    }

    for(int k =0;k<N;k++){
        printf("%d ",arrayInt[k]);
    }


    return 0;
}