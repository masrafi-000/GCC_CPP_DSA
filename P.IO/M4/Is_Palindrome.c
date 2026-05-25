#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{

    int len = strlen(str);

    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[10001];
    scanf("%s", str);

    int val = is_palindrome(str);

    if (val == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}