#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[10001];

    scanf("%s", s);

    int len = strlen(s);

    bool flag = false;

    for (int i = 0, j = len - 1; i < j; i++, j--)
    {

        if (s[i] == s[j])
        {
            flag = true;
        }
    }

    if (flag == true)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}