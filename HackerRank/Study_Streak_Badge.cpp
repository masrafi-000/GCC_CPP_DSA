#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        bool flag = false;

        for (int i = 0; i + k <= n; i++)
        {
            int a = 0;

            for (int j = i; j < i + k; j++)
            {
                if (str[j] == 'A')
                {
                    a++;
                }
            }
            if (a <= 1)
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}