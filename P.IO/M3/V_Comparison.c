#include <stdio.h>

int main()
{
    int a, b;
    char s;
    scanf("%d %c %d", &a, &s, &b);

    if (s == '<')
    {
        if (a < b)
        {
            printf("Right\n");
        }
        else
            printf("Wrong\n");
    }
    else if (s == '>')
    {
        if (a > b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (s == '=')
    {
        if (a == b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}