#include <stdio.h>

int isLucky(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int d = n % 10;

    if (d != 4 && d != 7)
    {
        return 0;
    }

    return isLucky(n / 10);
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (isLucky(i) && n % i == 0)
        {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}