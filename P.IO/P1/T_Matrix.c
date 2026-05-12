#include <stdio.h>
#include <stdlib.h>

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

    int primary_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary_diagonal_sum += arr[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                secondary_diagonal_sum += arr[i][j];
            }
        }
    }
    int diff = primary_diagonal_sum - secondary_diagonal_sum;

    

    printf("%d\n", abs(diff));

    return 0;
}