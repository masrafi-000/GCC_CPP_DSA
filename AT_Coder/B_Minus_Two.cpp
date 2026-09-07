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

        vector<long long> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<long long> b(n);

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            b[i] = abs(arr[i] - 2);
        }

        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            if (b[i] == b[j])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}