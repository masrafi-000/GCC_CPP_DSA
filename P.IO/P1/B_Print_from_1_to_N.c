#include <stdio.h>

void one_to_n(int n, int i)
{
    if (i > n)
    {
        return;
    }
    printf("%d\n", i);

    one_to_n(n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    one_to_n(n, 1);

    return 0;
}