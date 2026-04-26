#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int arr[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count[n+1];
    for (int i = 1; i <= n; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        int val = arr[i];
        count[val]++;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}