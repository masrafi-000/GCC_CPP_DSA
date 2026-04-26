#include <stdio.h>
#include <string.h>

int main()
{

    int count[26] = {0};
    char ch;
    while (scanf("%c", &ch) != EOF)
    {
        count[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {

            printf("%c : %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}