#include <stdio.h>
#include <string.h>

int main()
{
    int t;

    scanf("%d", &t);
    while (t--)
    {
        char s[101], t[101];
        scanf("%s %s", s, t);
        int len_s = strlen(s);
        int len_t = strlen(t);
        int i;

        for (i = 0; i < len_s && i < len_t; i++)
        {
            printf("%c%c", s[i], t[i]);
        }

        if (i < len_s)
        {
            for (; i < len_s; i++)
            {
                printf("%c", s[i]);
            }
        }
        else if (i < len_t)
        {
            for (; i < len_t; i++)
            {
                printf("%c", t[i]);
            }
        }

        printf("\n");
    }

    return 0;
}