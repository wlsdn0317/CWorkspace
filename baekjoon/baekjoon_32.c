#include <stdio.h>

int main()
{
    char aryC[5][16] = {0,};
    

    for(int i= 0 ; i < 5; i++){
        scanf("%s",aryC[i]);
    }

   

    for(int i= 0 ; i < 16; i++){
        for(int j = 0 ; j < 5; j++)
        {
            if(aryC[j][i] == 0);
            else{
                printf("%c", aryC[j][i]);
            }
        }
    }
    




    return 0;
}