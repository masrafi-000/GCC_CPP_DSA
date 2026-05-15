#include <stdio.h>

int main()
{

    int n, k;
    scanf("%d %d", &n, &k);

    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int maxIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxIdx])
            {
                maxIdx = j;
            }
        }
        long long temp = arr[i];
        arr[i] = arr[maxIdx];
        arr[maxIdx] = temp;
    }

    long long sum = 0;

    for (int i = 0; i < k; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
    }

    printf("%lld\n", sum);
    return 0;
}