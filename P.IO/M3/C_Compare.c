#include <stdio.h>

int main()
{
    char a[1001];
    char b[1001];

    scanf("%s %s", a, b);

    // printf("%s", a);

    int i = 0;

    while (1)
    {
        if (a[i] < b[i])
        {
            printf("%s\n", a);
            break;
        }
        else if (a[i] > b[i])
        {
            printf("%s\n", b);
            break;
        }
        else if (a[i] == b[i])
        {
            i++;
        }
    }
    return 0;
}