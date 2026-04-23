#include <stdio.h>
#include <string.h>


int main()
{
    char s[1005];
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0, j = len-1; s[i] , s[j]; i++, j--)
    {
        if (s[i] != s[j])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");

    return 0;
}