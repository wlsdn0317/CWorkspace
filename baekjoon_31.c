#include <stdio.h>

int main(){
    int aryN[9][9];
    int i,j,max;
    int maxi,maxj;
    max = 0;

    for(i = 0 ; i<9;i++){
        for(j = 0 ; j<9 ; j++){
            scanf("%d",&aryN[i][j]);
            if(max <= aryN[i][j]){
                max = aryN[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }
    printf("%d",max);
    printf("\n");
    printf("%d %d",maxi+1,maxj+1);
    return 0;
}