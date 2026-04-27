#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char f_first_name[1001];
    char f_second_name[1001];
    char s_first_name[1001];
    char s_second_name[1001];

    scanf("%s %s", f_first_name, f_second_name);
    scanf("%s %s", s_first_name, s_second_name);

    int len = strlen(f_second_name);

    for (int i = 0; i < len; i++)
    {
        if (f_second_name[i] != s_second_name[i])
        {
            printf("NOT\n");
            return 0;
        }
    }

    printf("ARE Brothers\n");

    return 0;
}