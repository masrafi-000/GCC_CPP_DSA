#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], sorted[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sorted[i] = arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (sorted[j] > sorted[j + 1])
            {
                int temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
        }
    }

    int median = sorted[n / 2];

    int idx = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == median)
        {
            idx = i;
            break;
        }
    }

    int mid = n / 2;
    int ans = abs(idx - mid);

    printf("%d\n", ans);

    return 0;
}