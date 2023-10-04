#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char s[1000001] ={0,};
    scanf("%[^\n]s", s);    //[^문자] : 문자 나오기 전까지 모든것을 입력받음
    int count = 0;
    int i;
    for(i =1;s[i] != 0;i++){    //1부터 시작함으로써 제일 첫제 공백은 공백없는것과 같이 계산
        if(s[i] == 32) count++;
    }
    count +=1;  //띄어쓰기 + 1 = 단어 갯수
    if(s[i-1] == 32) count --; //제일 뒤에 공백과 공백문자만 있는 문자열은 count -1

    printf("%d",count);

    return 0;
}