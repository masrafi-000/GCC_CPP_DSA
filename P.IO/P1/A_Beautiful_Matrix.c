#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int arr[n][n];

    int r = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);

            if (arr[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }

    int moves = abs(r - 2) + abs(c - 2);

    printf("%d\n", moves);

    return 0;
}