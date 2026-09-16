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

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j + 1 < n; j++)
            {
                if (v[j] > v[j + 1] && abs(v[j] - v[j + 1]) > 1)
                {
                    swap(v[j], v[j + 1]);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}