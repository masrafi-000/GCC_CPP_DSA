#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        long long int m, a, b, c;

        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        int mul = a * b * c;

        if (m == 0)
        {
            printf("0\n");
        }
        else if (m % mul == 0)
        {
            printf("%lld\n", m / mul);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}