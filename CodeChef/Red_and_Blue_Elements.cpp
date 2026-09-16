#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        vector<ll> pre(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            pre[i + 1] = pre[i] + v[i];
        }

        ll ans = 0;

        for (int i = 1; i < n; i++)
        {
            ll b_sum = pre[n - i];

            ll r_sum = pre[n] - pre[n - i];

            ll sum = r_sum * (n - i) + b_sum * i;

            ans = max(ans, sum);
        }

        cout << ans << endl;
    }

    return 0;
}