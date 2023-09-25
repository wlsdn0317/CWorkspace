#include <stdio.h>

int main()
{
    int arrayInt[10];
    int count =0;
    for(int i =0; i<10;i++)
    {
        scanf("%d",&arrayInt[i]);
        arrayInt[i] %= 42;
    }

    for(int i = 0 ; i < 42; i++)
    {
        for(int j = 0;j<10;j++)
        {
            if(i == arrayInt[j]){
                count++;
                break;
            }
        }
    }

    printf("%d",count);
    
    return 0;
}