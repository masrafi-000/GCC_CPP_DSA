#include <stdio.h>

int main()
{
    double a;
    scanf("%lf", &a);

    double area = 3.141592653 * a * a;

    printf("%.9lf\n", area);

    return 0;
}