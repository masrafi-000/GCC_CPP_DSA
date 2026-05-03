#include <stdio.h>
#include <string.h>
int main()
{
    char x[1000001];
    scanf("%s", x);

    int len = strlen(x);
    int sum = 0;
    for (size_t i = 0; i < len; i++)
    {
        sum += x[i] - '0';
    }

    printf("%d", sum);
    
    return 0;
}