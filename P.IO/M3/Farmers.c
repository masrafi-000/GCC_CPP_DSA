#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int m1, m2, d;

        scanf("%d %d %d", &m1, &m2, &d);

        int nd = (m1 * d) / (m1 + m2);

        int fd = d - nd;

        printf("%d\n", fd);
    }

    return 0;
}