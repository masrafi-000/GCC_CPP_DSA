#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> p(n + 1), pos(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
            pos[p[i]] = i;
        }

        vector<pair<int, int>> ans;

        while (true)
        {
            bool done = true;

            for (int i = 1; i <= n; i++)
            {
                if (p[i] == i)
                    continue;

                done = false;

                int j = pos[i];

                if (abs(p[i] - p[j]) >= abs(i - j))
                {
                    swap(p[i], p[j]);

                    pos[p[i]] = i;
                    pos[p[j]] = j;

                    ans.push_back({i, j});
                    break;
                }

                bool found = false;

                for (int k = 1; k <= n; k++)
                {
                    if (k == i)
                        continue;

                    if (abs(p[i] - p[k]) >= abs(i - k))
                    {
                        swap(p[i], p[k]);

                        pos[p[i]] = i;
                        pos[p[k]] = k;

                        ans.push_back({i, k});
                        found = true;
                        break;
                    }
                }

                if (found)
                    break;
            }

            if (done)
                break;
        }

        cout << ans.size() << '\n';

        for (auto [i, j] : ans)
        {
            cout << i << ' ' << j << '\n';
        }
    }

    return 0;
}