#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    bool flag = false;
    for (int i = a; i <= b; i++)
    {
        bool lucky = true;
        int num = i;
        while (num > 0)
        {
            int last_digit = num % 10;
            if (last_digit != 4 && last_digit != 7)
            {
                lucky = false;
            }
            num /= 10;
        }

        if (lucky == true)
        {
            flag = true;
            printf("%d ", i);
        }
    }

    if (flag == false)
    {
        printf("-1");
    }

    return 0;
}