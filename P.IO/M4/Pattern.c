#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int r = 2 * n - 1;

    for (int i = 1; i <= r; i++)
    {
        int l;
        if (i <= n)
        {
            l = i;
        }
        else
        {
            l = r - i + 1;
        }

        int s = n - l;
        int w = 2 * l - 1;

        char ch;

        if (l % 2 == 1)
        {
            ch = '#';
        }
        else
        {
            ch = '-';
        }

        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < w; j++)
        {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}