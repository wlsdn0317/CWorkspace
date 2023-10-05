#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i< n;i++){
        for(int j = n -1;j>i;j--){
            printf(" ");
        }
        for(int j = 0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }

    //2*n-1 홀수 2*n짝수
    for(int i = 1;i<n;i++){
        for(int j = 0;j<i;j++){
            printf(" ");
        }
        for(int j = 2*n-1;j>2*i;j--){
            printf("*");
        }
        printf("\n");
    }    

    return 0;
}