#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[n + 1];
    scanf("%s", str);

    int sum = 0;

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        sum += str[i] - '0';
    }

    printf("%d\n", sum);

    return 0;
}