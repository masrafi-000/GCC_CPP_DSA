#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;

        ll d = y - x;

        ll ans = 0;

        ll count = 0;

        if (x <= d)
        {
            count = min(k, d - x + 1);
        }

        for (ll i = 0; i < count; i++)
        {
            ans += d % (x + i);
        }
        ans += (k - count) * d;

        cout << ans << endl;
    }

    return 0;
}