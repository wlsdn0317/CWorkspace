#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char s[101] = {0,};
    scanf("%s",s);
    int b;

    for(int i = 0;s[i] != 0;i++){
        if(s[i] == s[i+1]){
            for(int j = i+1; s[j] != 0; i++){
                if(s[j] != s[j+1]){
                    for(int k = j+1;s[k] != 0; k ++){
                        if(s[k] == s[i]){
                            //bool == false;
                            b = 0;
                            break;
                        }
                        else{
                            b =1;
                        }
                    }
                }
                else{
                    b =1;
                }
            }
        }
        else{
            for(int j = i+1; s[j] != 0;j++){
                if(s[i] == s[j]){
                    //bool == false
                    b = 0;
                    break;
                }
                else{
                    b = 1;
                }
            }
        }

    }
    printf("%d",b);



    return 0;
}