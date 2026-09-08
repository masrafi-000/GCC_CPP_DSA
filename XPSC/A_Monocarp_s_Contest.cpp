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
        vector<int> a(n);

        int zero = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] == 0)
                zero++;
        }

        if (zero < 2)
        {
            cout << -1 << endl;
        }
        else if (a[0] == 0 && a[n - 1] == 0)
        {
            cout << 0 << endl;
        }
        else if (a[0] == 0 || a[n - 1] == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}