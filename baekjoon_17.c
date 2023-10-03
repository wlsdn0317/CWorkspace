#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t>0){
        int r;
        char c[20] = {0,};
        scanf("%d %s",&r,c);

    
            for(int i = 0;i<20;i++){
                if(c[i]!=0){
                    for(int j = 0;j<r;j++){
                        printf("%c",c[i]);
                    }
                }
            }
   
        t--;
    }
    return 0;
}