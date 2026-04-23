#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t > 0)
    {

        int h, w;

        scanf("%d %d", &h, &w);

        if (h == w)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }

        t--;
    }

    return 0;
}