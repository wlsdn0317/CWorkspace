#include <stdio.h>
#include <stdlib.h>


int maxof(const int a[],int n){
    int max = a[0];
    for(int i =1;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}
int minof(const int a[],int n){
    int min = a[0];
    for(int i = 1; i<n;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    return min;
}

int main(){
    int N;
    scanf("%d",&N);
    int* arrayInt;
    arrayInt = calloc(N,sizeof(int));
    for(int i = 0; i< N; i++){
        scanf("%d",&arrayInt[i]);
    }
    printf("%d ", minof(arrayInt,N));
    printf("%d", maxof(arrayInt,N));
    free(arrayInt);
    return 0;
}