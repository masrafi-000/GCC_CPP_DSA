#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    vector<int> v(n + 1);

    vector<vector<int>> freq(n + 1, vector<int>(3, 0));

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];

        freq[i] = freq[i - 1];
        freq[i][v[i]]++;
    }

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int count0 = freq[r][0] - freq[l - 1][0];
        int count1 = freq[r][1] - freq[l - 1][1];
        int count2 = freq[r][2] - freq[l - 1][2];

        if (count0 == 0)
        {
            cout << 0 << "\n";
        }
        else if (count1 == 0)
        {
            cout << 1 << "\n";
        }
        else if (count2 == 0)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << 3 << "\n";
        }
    }

    return 0;
}