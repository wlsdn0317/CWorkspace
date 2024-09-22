#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char s[101] = {0,};
    scanf("%s",s);
    int count =0;
    for(int i =0; s[i] != 0; i++){
        if(s[i] == 'c'){
            if(s[i+1] == '=' || s[i+1] == '-'){
                count ++;
                i +=1;
            }
            else{
                count++;
            }
        }
        else if(s[i] == 'd'){
            if(s[i+1] == 'z'){
                if(s[i+2] == '='){
                    count ++;
                    i +=2;
                }
                else{
                    count++;
                }
            }
            else if(s[i+1] == '-'){
                count ++;
                i += 1;
            }
            else{
                count++;
            }
        }
        else if(s[i] == 'l'){
            if(s[i+1] == 'j'){
                count++;
                i += 1;
            }
            else{
                count++;
            }
        }
        else if(s[i] == 'n'){
            if(s[i+1] == 'j'){
                count++;
                i += 1;
            }
            else{
                count++;
            }
        }
        else if(s[i] =='s'){
            if(s[i+1] == '='){
                count++;
                i+=1;
            }
            else{
                count++;
            }
        }
        else if(s[i] =='z'){
            if(s[i+1] == '='){
                count++;
                i+=1;
            }
            else{
                count++;
            }
        }
        else{
            count++;
        }
    }

    printf("%d",count);
    return 0;
}