#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int t;
    char str[1000];
    char x[21];
    scanf("%d", &t);
    for(int i = 0; i<t;i++){
        scanf("%s",str);
        for(int j = 0;j<1000;j++){
            if(str[j] == 0){
                x[i*2]=str[0];
                x[i*2+1] = str[j-1];
                break;
            }
        }
    }

    for(int i = 0 ; i < t;i++){
        printf("%c%c\n",x[i*2],x[i*2+1]);
    }
    return 0;
}