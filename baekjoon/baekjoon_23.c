#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char s[101] = {0,};
    scanf("%s",s);
    int i =0 , count = 1;
    while(s[i] != 0){
        i++;
    }

    for(int j = 0; j<i/2;j++){
        if(s[j] != s[i-j-1]) 
        {
            count = 0;
        }
    }
    printf("%d",count);
    return 0;
}