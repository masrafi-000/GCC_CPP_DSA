#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000001];

    fgets(str, 1000001, stdin);

    for (int i = 0; str[i] != '\\'; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}