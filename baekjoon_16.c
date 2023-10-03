#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char s[100] ={0,};
    scanf("%s",s);
    int n[26];
    for(int i = 0 ; i < 26;i++){
        n[i] = -1;
        for(int j = 0 ; j<100;j++){
            if(s[j] - 97 == i){
                n[i] = j;
                break;
            }
        }
    }

    for(int i = 0;i<26;i++){
        printf("%d ",n[i]);
    }
    return 0;
}