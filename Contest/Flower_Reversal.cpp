#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int transition = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                transition++;
            }
        }

        int beauty = (n - 1) - transition;

        if (transition >= 3)
        {
            beauty += 2;
        }
        else if (transition == 2)
        {
            beauty += 1;
        }

        cout << beauty << endl;
    }

    return 0;
}