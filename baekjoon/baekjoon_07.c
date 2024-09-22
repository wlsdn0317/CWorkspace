#include <stdio.h>

int main(){
    int arrayInt[10];
    int count =0;
    for(int i=0;i<10;i++){
        scanf("%d",&arrayInt[i]);
    }

    for(int i = 0;i<10;i++){
        arrayInt[i] %= 42;
    }

    for(int i = 0;i<10;i++){
        for(int j = i+1;j<10;j++){
            if(arrayInt[i] == arrayInt[j]){
                count++;
            }
        }
    }
    printf("%d",10-count);



    return 0;
}