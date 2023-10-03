#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int n, sum;
    scanf("%d",&n);
    sum = 0;
    char x[n];
    scanf("%s",x);

    for(int i = 0; i<n ;i++){
        sum += x[i]-48;
    }
   
    printf("%d",sum);
   

   
    return 0;
}