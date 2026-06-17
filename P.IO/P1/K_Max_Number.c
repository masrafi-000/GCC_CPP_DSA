#include <stdio.h>

int maxi(int arr[], int n, int i)
{

    if (i == n-1)
    {
        return arr[i];
    }

    int max = maxi(arr, n, i + 1);

    if (arr[i] > max)
    {
        return arr[i];
    }
    else
    {
        return max;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans = maxi(arr, n, 0);
    printf("%d\n", ans);

    return 0;
}