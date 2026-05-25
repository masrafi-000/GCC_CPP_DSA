#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a;
    int ans = 1e9;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);

        int count = 0;

        for (; a % 2 == 0; count++)
        {
            a = a / 2;
        }

        if (count < ans)
        {
            ans = count;
        }
    }

    printf("%d\n", ans);

    return 0;
}