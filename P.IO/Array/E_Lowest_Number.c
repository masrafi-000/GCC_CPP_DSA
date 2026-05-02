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

    int lowest = arr[0];
    int idx = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
            idx = i + 1;
        }
    }
    printf("%d %d", lowest, idx);

    return 0;
}