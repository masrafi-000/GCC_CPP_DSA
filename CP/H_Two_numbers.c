#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int floor_div = a / b;

    int ceil_div = 0;

    if (a % b == 0)
    {

        ceil_div = a / b;
    }
    else
    {

        ceil_div = a / b + 1;
    }

    int round_div = 0;
    if ((a % b) * 2 >= b)
    {

        round_div = a / b + 1;
    }
    else
    {

        round_div = a / b;
    }

    printf("floor %d / %d = %d\n", a, b, floor_div);
    printf("ceil %d / %d = %d\n", a, b, ceil_div);
    printf("round %d / %d = %d\n", a, b, round_div);

    return 0;
}