#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n%2 == 0)
        {
            printf("%d\n", i);
        } else {
            return -1;
        }
        
    }
    

   return 0;

}