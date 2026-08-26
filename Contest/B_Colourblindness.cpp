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

        string c, s;

        cin >> c >> s;

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (c[i] == 'R' && s[i] != 'R')
            {
                flag = false;
                break;
            }

            if (c[i] != 'R' && s[i] == 'R')
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}