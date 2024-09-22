#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char s[16] = {
        0,
    };
    scanf("%s", s);
    int time = 0;
    for (int i = 0; s[i] != 0; i++)
    {
        if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C')
            time += 3;
        else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F')
            time += 4;
        else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I')
            time += 5;
        else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L')
            time += 6;
        else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O')
            time += 7;
        else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S')
            time += 8;
        else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V')
            time += 9;
        else
            time += 10;
    }

    printf("%d", time);
    return 0;
}
