#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cheker = 0;
    while(n>0){
        char s[101] = {0,};
        scanf("%s", s);
        int b = 0;
        int count = 0;

        for (int i = 0; s[i] != 0; i++)
        {
            for (int j = i + 1; s[j] != 0; j++)
            {
                if (s[i] != s[j])
                {
                    b = 0;
                }
                else
                {
                    b = 1;
                    count = j;
                    break;
                }
            }

            if (b == 1)
            {
                if(s[i+1] == 0) 
                {
                    cheker++;
                    break;
                }

                if ((i + 1) == count)
                {
                    //i++;
                }
                else
                {
                    break;
                }
            }
            else if(b == 0 && s[i+1] == 0)
            {
                cheker++;
            }
        }
        n--;
    }
    printf("%d" ,cheker);
    return 0;
}