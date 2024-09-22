#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arrayInt[n];
    int reverseInt[n];
    for(int i =0; i<n;i++){
        arrayInt[i] = i+1;
        reverseInt[i] = i+1;
    }
    
    int x,y;
    while(m>0){
        scanf("%d %d", &x,&y);
      
        int j = x-1;
        for(int i = y-1;i>=x-1;i--){
            reverseInt[j]=arrayInt[i];
            j++;
        }

        for(int i =0;i<n;i++){
            arrayInt[i] = reverseInt[i];
        }
        m--;
    }
    
    for(int i = 0; i <n; i++){
        printf("%d", reverseInt[i]);

    }



    return 0;
}