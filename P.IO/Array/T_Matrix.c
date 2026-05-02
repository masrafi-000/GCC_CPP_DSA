#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int pri = 0, sec = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                pri += arr[i][j];
            }

            if (i + j == n - 1)
            {
                sec += arr[i][j];
            }
        }
    }

    printf("%d", abs(pri - sec));

    return 0;
}