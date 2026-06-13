#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (n != m)
    {
        printf("NO\n");
        return 0;
    }

    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || i + j == n - 1)
            {
                if (arr[i][j] != 1)
                {
                    flag = false;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    flag = false;
                }
            }
        }
    }

    if (flag == true)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}