#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int n,max,sum,avr;
    scanf("%d",&n);
    int arrayInt[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arrayInt[i]);
    }
    max = 0;
    sum = 0;
    for(int i = 0;i<n;i++){
        if(max<arrayInt[i]){
            max = arrayInt[i];
        }
        sum += arrayInt[i];
    }
    avr = sum/n;

    printf("%f",(float)sum/(float)max*100/n);

    return 0;
}