#include <stdio.h>
#include <stdbool.h>

int main()
{
    int m, n;

    while (true)
    {

        scanf("%d %d", &m, &n);

        if (m <= 0 || n <= 0)
        {
            return 0;
        }

        int sum = 0;

        if (m > n)
        {
            for (int i = n; i <= m; i++)
            {
                sum += i;
                printf("%d ", i);
            }
        }
        else
        {
            for (int i = m; i <= n; i++)
            {
                sum += i;
                printf("%d ", i);
            }
        }
        printf("sum =%d\n", sum);
    }

    return 0;
}