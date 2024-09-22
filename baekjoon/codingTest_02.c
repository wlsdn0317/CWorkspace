#include <stdio.h>

int main (){
    int n = 5;

    for(int i = 0 ; i < 2*n-1;i++){
        for(int j = 0 ; j < 2*n-1; j ++){
            if(i>j || 2*n-1-i<j){
                printf("%d",n-j);
            }
            else {
                printf("%d",n-i);
                
            }
        }
        printf("\n");
    }


    return 0;
}