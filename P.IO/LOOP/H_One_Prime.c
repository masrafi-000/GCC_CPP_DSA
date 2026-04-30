#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    bool isPrime = true;

    if (n <= 1)
    {
        isPrime = false;
    }
    else
    {

        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime == true)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}