#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] % 2 == 0)
        {
            c1++;
        }

        else if (arr[i] % 3 == 0)
        {
            c2++;
        }
    }

    printf("%d %d", c1, c2);

    return 0;
}