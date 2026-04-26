#include <stdio.h>
int main()
{
    long long int n;

    scanf("%lld", &n);
    long long int sum = (n * (n + 1)) / 2;

    printf("%lld\n", sum);

    return 0;
}