#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    bool flag = true;

    while (true)
    {

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                arr[i] /= 2;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            count++;
        }
        else
        {
            break;
        }
    }

    printf("%d", count);

    return 0;
}