#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    scanf("%s", s);

    int len = strlen(s);

    int freq[26] = {0};

    for (int i = 0; i < len; i++)
    {
        int val = s[i] - 'a';
        freq[val]++;
    }

    for (size_t i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            char c = i + 'a';
            printf("%c - %d\n", c, freq[i]);
        }
    }

    return 0;
}