#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x = n / 1000;

    if (x % 2 != 0)
    {
        printf("ODD\n");
    }
    else
    {
        printf("EVEN\n");
    }

    return 0;
}