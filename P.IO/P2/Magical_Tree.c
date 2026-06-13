#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int row = (n / 2) + 6;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < (2 * i) + 1; j++)
        {

            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < row - 1 - (n / 2); j++)
        {
            printf(" ");
        }

        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}