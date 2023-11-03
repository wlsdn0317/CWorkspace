#include <stdio.h>

int main(){
    int n = 20;
    float point = 0;
    float grade = 0;

    while (n>0){
        char s[51] = {0,};
        float  p =0;
        char g[3] = {0,}; 

        scanf("%s %f %s",s,&p,g);

        if(g[0] != 'P'){
            point += p;
            switch (g[0])
            {
            case 'A' : 
                if(g[1] == '+') grade += (4.5 * p) ;
                else grade += 4.0 *p;
                break;
            case 'B' : 
                if(g[1] == '+') grade += 3.5*p;
                else grade += 3.0*p;
                break;
            case 'C' : 
                if(g[1] == '+') grade += 2.5*p;
                else grade += 2.0*p;
                break;
            case 'D' : 
                if(g[1] == '+') grade += 1.5*p;
                else grade += 1.0*p;
                break;
            case 'F' : grade += 0.0*p;
                break;
            }
        }
        else{
            //continue;
        }
        n--;
    }

    printf("%f",grade/point);


    return 0;
}