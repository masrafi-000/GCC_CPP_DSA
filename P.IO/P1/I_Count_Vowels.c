#include <stdio.h>

int vowel(char str[], int i)
{

    if (str[i] == '\0')
    {
        return 0;
    }

    int count = vowel(str, i + 1);
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
        return count + 1;
    }
    else
    {

        return count;
    }
}

int main()
{
    char str[201];
    fgets(str, 201, stdin);
    int val = vowel(str, 0);
    printf("%d", val);

    return 0;
}