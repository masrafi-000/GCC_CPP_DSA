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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> prefixMax(n);

        prefixMax[0] = a[0];

        for (int i = 1; i < n; i++)
        {
            prefixMax[i] = max(prefixMax[i - 1], a[i]);
        }

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            int wait = prefixMax[i] - a[i];
            ans += wait;
        }

        cout << ans << endl;
    }

    return 0;
}