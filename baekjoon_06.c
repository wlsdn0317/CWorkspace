#include <stdio.h>

int main(){
    int arrayInt[30];
    int student;
    for(int i =0; i<30;i++){
        arrayInt[i] =0;
    }
    
    for(int i =0; i<28 ; i++){
        scanf("%d",&student);
        arrayInt[student-1] = student;
    }
    
    for(int i =0; i<30; i++){
        if(arrayInt[i] == 0){
            printf("%d\n",i+1);
        }
    }
    
    
    return 0;
}