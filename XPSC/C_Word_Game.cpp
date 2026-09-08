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

        vector<vector<string>> arr(3);
        map<string, int> freq;

        for (int i = 0; i < 3; i++)
        {
            arr[i].resize(n);

            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                freq[arr[i][j]]++;
            }
        }

        vector<int> ans(3, 0);

        for (int i = 0; i < 3; i++)
        {
            for (const string &word : arr[i])
            {
                if (freq[word] == 1)
                {
                    ans[i] += 3;
                }
                else if (freq[word] == 2)
                {
                    ans[i] += 1;
                }
            }
        }
        cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
    }
    return 0;
}