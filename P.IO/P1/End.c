#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        if (i == j)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            printf("%d %d ", arr[i], arr[j]);
        }
    }

    return 0;
}