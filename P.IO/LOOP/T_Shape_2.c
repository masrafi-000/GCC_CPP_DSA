#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int s = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < space; j++)
        {

            printf(" ");
        }

        for (int j = 0; j < s; j++)
        {

            printf("*");
        }

        printf("\n");
        s += 2;
        space--;
    }

    return 0;
}