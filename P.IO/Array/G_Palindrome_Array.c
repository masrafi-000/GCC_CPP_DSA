#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bool isPalindrome = true;

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            isPalindrome = false;
        }
    }

    if (isPalindrome == true)
    {

        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}