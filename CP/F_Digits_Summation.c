#include <stdio.h>

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    int last_digit_a = a % 10;
    int last_digit_b = b % 10;

    printf("%d\n", last_digit_a + last_digit_b);

    return 0;
}