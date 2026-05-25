#include <stdio.h>

long long int sum(int n, int arr[], int i)
{
    if (i == n)
        return 0;

    return arr[i] + sum(n, arr, i + 1);
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

    long long int res = sum(n, arr, 0);
    printf("%lld\n", res);

    return 0;
}