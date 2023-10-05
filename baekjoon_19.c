#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char n[4],m[4];
    scanf("%s %s",n,m);
    if(n[2]>m[2]) printf("%c%c%c",n[2],n[1],n[0]);
    else if(m[2]>n[2]) printf("%c%c%c",m[2],m[1],m[0]);
    else{
        if(n[1]>m[1]) printf("%c%c%c",n[2],n[1],n[0]);
        else if(m[1]>n[1]) printf("%c%c%c",m[2],m[1],m[0]);
        else{
            if(n[0]>m[0]) printf("%c%c%c",n[2],n[1],n[0]);
            else if(m[0]>n[0]) printf("%c%c%c",m[2],m[1],m[0]);
        }
    }
    return 0;
}