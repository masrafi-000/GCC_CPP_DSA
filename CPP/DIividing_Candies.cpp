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

        int x;
        cin >> x;

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if (a % x == 0)
            {
                ans = max(ans, a);
            }
        }

        cout << ans << endl;
    }

    return 0;
}