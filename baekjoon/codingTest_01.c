#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(){
    long long x , y;
    scanf("%lld",&x);
    int count = 1;
    y = x;
    while(x>0){
        x/=10;
        count *= 10;
    }
    int answer ;


    for(int i = y-1;i>0;i--){
        if(i == i*i%count){
            answer = i;
            break;
        }
    }
    
    printf("%d",answer);

    return 0;
}