#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    char s[a + b + 5];
    scanf("%s", s);

    bool check = true;

    for (int i = 0; i < a + b + 1; i++)
    {
        if (i == a)
        {

            if (s[i] != '-')
            {
                check = false;
            }
        }
        else
        {
            if (s[i] < '0' || s[i] > '9')
            {
                check = false;
            }
        }
    }

    if (check == true)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}