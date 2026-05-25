#include <stdio.h>

void one_to_n(int n, int i)
{
    if (i > n)
    {
        return;
    }
    one_to_n(n, i + 1);

    if (i == 1)
        printf("%d", i);
    else
        printf("%d ", i);
}

int main()
{
    int n;
    scanf("%d", &n);

    one_to_n(n, 1);

    return 0;
}