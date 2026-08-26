#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, p, q, r;
        cin >> a >> b >> p >> q >> r;

        int ans = INT_MAX;

        for (int i = 0; i <= min(a, b); i++)
        {
            int cost = i * r;

            int right = a - i;

            cost += ((right + 1) / 2) * p;

            int up = b - i;
            cost += ((up + 1) / 2) * q;

            ans = min(ans, cost);
        }

        cout << ans << endl;
    }

    return 0;
}