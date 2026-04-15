#include <stdio.h>

int main()
{
    int n;
    int x;
    int evn = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            evn++;
        }
        else
        {
            odd++;
        }

        if (x > 0)
        {
            pos++;
        }
        else if(x < 0)
        {
            neg++;
        }
    }
    printf("Even: %d\n", evn);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}