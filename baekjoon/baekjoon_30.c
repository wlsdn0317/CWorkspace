#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int aryN[n][m];
    int aryM[n][m];

    for(int i = 0; i< n; i++){
        for(int j = 0 ; j < m; j++){
            scanf("%d",&aryN[i][j]);
        }
    }

    for(int i = 0; i< n; i++){
        for(int j = 0 ; j < m; j++){
            scanf("%d",&aryM[i][j]);
        }
    }

    for(int i = 0; i< n; i++){
        for(int j = 0 ; j < m; j++){
            aryN[i][j] += aryM[i][j];
            printf("%d ",aryN[i][j]);
        }
        printf("\n");
    }







    return 0;
}