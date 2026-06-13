#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];
    char b[101];

    scanf("%s %s", a, b);

    int cmp = strcmp(a, b);

    if (cmp <= 0)
    {
        printf("%s", a);
    }
    else
    {
        printf("%s", b);
    }

    return 0;
}