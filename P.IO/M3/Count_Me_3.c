#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[10001];
        scanf("%s", s);

        int len = strlen(s);
        int num = 0, capital = 0, small = 0;

        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                small++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                num++;
            }
        }

        printf("%d %d %d\n", capital, small, num);
    }

    return 0;
}