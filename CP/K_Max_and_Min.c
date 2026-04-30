#include <stdio.h>

int main()
{
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long min = a, max = a;

    if (b < min)
    {

        min = b;
    }
    if (c < min)
    {

        min = c;
    }

    if (b > max)
    {

        max = b;
    }
    if (c > max)
    {

        max = c;
    }

    printf("%lld %lld", min, max);

    return 0;
}