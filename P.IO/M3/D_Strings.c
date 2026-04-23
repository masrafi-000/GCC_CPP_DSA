#include <stdio.h>
#include <string.h>

int main()
{
    char a[11];
    char b[11];

    scanf("%s", a);
    scanf("%s", b);

    int al = strlen(a);
    int bl = strlen(b);
    printf("%d %d\n", al, bl);

    printf("%s%s\n",a, b);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n", a, b);

    return 0;
}