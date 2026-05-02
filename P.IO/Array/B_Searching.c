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

    int val;
    scanf("%d", &val);
    int idx = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            idx = i;
            break;
        }
    }

    printf("%d", idx);

    return 0;
}