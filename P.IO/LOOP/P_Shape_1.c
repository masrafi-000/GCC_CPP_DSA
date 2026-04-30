#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int s = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = s; j >= 1; j--)
        {
            printf("*");
        }

        printf("\n");
        s--;
    }

    return 0;
}