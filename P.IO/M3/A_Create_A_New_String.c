#include <stdio.h>

int main()
{
    char s[1005];
    char t[1005];

    scanf("%s", s);
    scanf("%s", t);

    int slen = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        slen++;
    }
    int tlen = 0;
    for (int i = 0; t[i] != '\0'; i++)
    {
        tlen++;
    }
    printf("%d %d\n", slen, tlen);

    char str[2020];
    int idx = 0;

    for (int i = 0; i < slen; i++)
    {
        str[idx] = s[i];
        idx++;
    }

    str[idx] = ' ';
    idx++;

    for (int i = 0; i < tlen; i++)
    {
        str[idx] = t[i];
        idx++;
    }

    str[idx] = '\0';

    printf("%s", str);

    return 0;
}