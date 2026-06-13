#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        if (n < 2)
        {
            printf("NO\n");
            continue;
        }

        int prime = 1;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}