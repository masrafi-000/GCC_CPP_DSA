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

    int max = 0;
    int min = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
        if (arr[i] < arr[min])
        {
            min = i;
        }
    }

    int temp = arr[min];
    arr[min] = arr[max];
    arr[max] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}