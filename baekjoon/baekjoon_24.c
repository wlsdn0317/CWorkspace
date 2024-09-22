#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char s[1000001] = {0, };
    scanf("%s", s);
    int i;
    for (i = 0; s[i] != 0; i++)
    {
        if (s[i] > 96)
            s[i] -= 32;
    }

    int count[26] = {0,};

    for (int j = 0; j < i; j++)
    {
        count[s[j] - 65] += 1;
    }

    int max = 0;
    for (int j = 0; j < 26; j++)
    {
        if (max < count[j])
        {
            max = count[j];
        }
    }

    int k = 0;
    int n;
    for (int j = 0; j < 26; j++)
    {
        if (max == count[j])
        {
            k++;
            n = j;
        }
    }

    if (k > 1)
    {
        printf("?");
    }
    else
    {
        printf("%c", n + 65);
    }

    return 0;
}