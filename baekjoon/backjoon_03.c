#include <stdio.h>
#include <stdlib.h>

int main(){
    int arrayInt[9];
    for(int i = 0;i<9;i++){
        scanf("%d",&arrayInt[i]);
    }
    int max = arrayInt[0];
    int number = 0;

    for(int i =1;i<9;i++){
        if(arrayInt[i]>max){
            max = arrayInt[i];
            number = i;
        }
    }

    printf("%d %d",max,number+1);
    return 0;
}