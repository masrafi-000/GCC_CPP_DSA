#include <stdio.h>

int main()
{
    long long int l1, l2, r1, r2;

    scanf("%lld %lld %lld %lld", &l1, &r1, &l2, &r2);

    long long int left = (l1 > l2) ? l1 : l2;
    long long int right = (r1 < r2) ? r1 : r2;

    if (left <= right)
    {
        printf("%lld %lld\n", left, right);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}