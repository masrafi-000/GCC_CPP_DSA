#include <stdio.h>

long long factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    long long int mul = factorial(n - 1);
    return n * mul;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int ans = factorial(n);

    printf("%lld", ans);

    return 0;
}