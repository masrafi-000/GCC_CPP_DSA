#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    scanf("%s", s);

    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }
    printf("%s", s);

    return 0;
}